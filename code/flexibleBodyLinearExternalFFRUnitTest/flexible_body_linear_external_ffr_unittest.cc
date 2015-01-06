/*
 * flexible_body_linear_external_ffr_unittest.cc
 *
 *  Created on: 17.06.2013
 *      Author: zwang
 */
#include <gtest/gtest.h>
#include "mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h"
//#include "/home/zwang/MBSim/fmatvec/src/fmatvec.h"
//// test readFEMData()
//TEST(linearExternalFFR, readFEMData){
//  FlexibleBodyLinearExternalFFR* ffr = new FlexibleBodyLinearExternalFFR("ffr", true);
//  string inFilePath = "FEM_data/";
//  ffr->readFEMData();
//
//}
//// test initM();
//
//// test initQv();

using namespace MBSim;
using namespace fmatvec;
using namespace std;

namespace unitTest{

  // fixture for testing updateM(); updateQv().
  class linearExternalFFRTest : public testing::Test {
    protected:
      virtual void SetUp() {
        Elements = 3;
        nf=5;
        abs_error = 1e-6;
        ffr = new MBSimFlexibleBody::FlexibleBodyLinearExternalFFR("ffr", false);

        const string inFilePath = "/home/zwang/MBSim/Students/FFR_FlexibleBody/FEM_data/dataForUnitTest/";
        ffr->readFEMData(inFilePath);

        Vec q0 = Vec(5 + 6, INIT, 0.0);
        q0(0) = 0.2;
        q0(1) = 0.3;
        q0(2) = 0.4;
        q0(3) = M_PI / 6;
        q0(4) = M_PI / 3;
        q0(5) = M_PI / 3;

        q0(6) = 0.002;
        q0(7) = 0.003;
        q0(8) = 0.004;
        q0(9) = 0.002;
        q0(10) = 0.003;

        Vec u0 = Vec(nf + 6, INIT, 0.0);
        u0(0) = 2;
        u0(1) = 3;
        u0(2) = 4;
        u0(3) = 10 * M_PI / 6;
        u0(4) = 10 * M_PI / 3;
        u0(5) = 10 * M_PI / 3;

        u0(6) = 0.02;
        u0(7) = 0.03;
        u0(8) = 0.04;
        u0(9) = 0.02;
        u0(10) = 0.03;

        ffr->setq0(q0);
        ffr->setu0(u0);

        ffr->updateAGGDot();

        ffr->init(unknownStage);
//        cout.precision(12);
//        cout << "M" << ffr->M << endl;

      }

      MBSimFlexibleBody::FlexibleBodyLinearExternalFFR* ffr;
      int Elements;
      int nf;
      double abs_error;
  };

  TEST_F(linearExternalFFRTest, readFEMData){

    ASSERT_EQ(Elements, ffr->Elements);
    ASSERT_EQ(nf, ffr->nf);

    double mij[3] = {2.393118773885549e05, 1.177597676428616e+05, 1.215521537540625e05};
    for (int i = 0; i < Elements; i++){
      EXPECT_DOUBLE_EQ(mij[i], ffr->mij[i]);
    }

    double u0[3][3] = {{105.0, 10.0, 5.13000011}, {23.1499996, 10.,20.}, {95., 5., 5.13000011}};
    for (int i = 0; i < Elements; i++){
      for(int j = 0; j < 3; j++){
        EXPECT_DOUBLE_EQ(u0[i][j], ffr->u0.at(i)(j));
      }
    }

    double phi[3 * 3][5] = {
                                     {    -0.4038, 2.8380E-02,  -4.0496E-02,      0.9991,      0.9971 },
                                     {     0.8634, 8.6471E-02,       0.2491,     -0.1067,      0.3371 },
                                     {-8.8401E-06,     0.9422,        1.000,  8.8920E-04,  3.3861E-03 },
                                     {-7.3827E-02, -2.7577E-02,  4.2396E-02,      0.1615,  8.2510E-02 },
                                     {     0.9993, -8.2909E-02,     -0.2362,     -0.4394,  3.0025E-03 },
                                     {-2.8757E-06,      0.5731,     -0.3103,  5.4185E-03,  2.5767E-02 },
                                     { 6.1765E-02, -2.7518E-02,  4.2206E-02,     -0.1230, -4.3357E-02 },
                                     {     0.9992, -8.3041E-02,     -0.2363,     -0.4297,  4.3270E-02 },
                                     { 4.0486E-05,      0.4039,     -0.7912, -2.7480E-03, -1.1402E-02 }
                                   };

    for (int i = 0; i < 3 * Elements; i++){
      for(int j = 0; j < nf; j++){
        EXPECT_DOUBLE_EQ(phi[i][j], ffr->phi(i,j));
      }
    }

    double K[3 * 3][3 * 3] = {
                      {  2.722094366664650e11,  -7.629394531250000e-06,  -1.242331718149038e11,                     0,                     0,                     0,                      0,                      0,                     0 },
                      {-7.629394531250000e-06,    2.761651025016547e11,  1.525878906250000e-05,                     0,                     0,                     0,                      0,                      0,                     0 },
                      { -1.242331718149038e11,   1.525878906250000e-05,   2.788545410889259e11,                     0,                     0,                     0,                      0,                      0,                     0 },
                      {                     0,                       0,                      0,  2.722094370158899e11,                     0,  1.242331718149039e11,                      0,                      0,                     0 },
                      {                     0,                       0,                      0,                     0,  2.761651028592020e11, 1.525878906250000e-05,                      0,                      0,                     0 },
                      {                     0,                       0,                      0,  1.242331718149039e11, 1.525878906250000e-05,  2.788545409202769e11,                      0,                      0,                     0 },
                      {                     0,                       0,                      0,                     0,                     0,                     0,   1.374698734778228e11,  -6.146033527644231e10,  6.310096153846155e10 },
                      {                     0,                       0,                      0,                     0,                     0,                     0,  -6.146033527644231e10,                      0,                     0 },
                      {                     0,                       0,                      0,                     0,                     0,                     0,   6.310096153846155e10,                      0,                     0 }
                    };

    for (int i = 0; i < 3 * Elements; i++){
      for(int j = 0; j < 3 * Elements; j++){
        EXPECT_DOUBLE_EQ(K[i][j], ffr->K(i,j));
      }
    }

  }

  TEST_F(linearExternalFFRTest, computeShapeIntegrals){

    double I_1[3] = { 3.940134030626254e7, 0.417847721908448e7, 0.420642787231390e7};
    for (int i = 0; i < 3; i++){
      EXPECT_NEAR(I_1[i], ffr->I_1(i), abs_error);
    }

    double I_kl[3][3] = {
                           {3.798531742732902e9, 0.336276130029446e9, 0.242666560398226e9},
                           {0.336276130029446e9, 0.038745968346993e9, 0.038946465912494e9},
                           {0.242666560398226e9, 0.038946465912494e9, 0.056600730085593e9}
                        };

    for (int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        EXPECT_NEAR(I_kl[i][j], ffr->I_kl(i,j), abs_error);
      }
    }

    double S_bar[3][5] = {
                             {-0.978203176786483e5, 0.001993378009957e5, 0.004315995236038e5,  2.431637842614776e5, 2.430640946420257e5},
                             { 4.457541227738490e5, 0.008363803742726e5, 0.030749576081601e5, -1.295091796877529e5, 0.862851692629678e5},
                             { 0.000024669778058e5, 3.420626886128862e5, 1.065989574387607e5,  0.005168521038306e5, 0.024587122237752e5}
                         };

    for (int i = 0; i < 3; i++){
      for(int j = 0; j < nf; j++){
        EXPECT_NEAR(S_bar[i][j], ffr->S_bar(i,j), abs_error);
      }
    }

    // for S_kl_bar only check S_11_bar and S_23_bar.
    double S_11_bar[5][5] = {
                              { 0.401264162058811e5,  -0.027093225000782e5,  0.038615801633592e5, -0.988746654606139e5, -0.973967366836665e5 },
                              {-0.027093225000782e5,   0.003743470526437e5, -0.005538885480644e5,  0.066725128832221e5,  0.066490508403243e5 },
                              { 0.038615801633592e5,  -0.005538885480644e5,  0.008206441271938e5, -0.095071743329828e5, -0.094735660416626e5 },
                              {-0.988746654606139e5,   0.066725128832221e5, -0.095071743329828e5,  2.437917120856244e5,  2.406205355624634e5 },
                              {-0.973967366836665e5,   0.066490508403243e5, -0.094735660416626e5,  2.406205355624634e5,  2.389560751647182e5 }
                            };
    for (int i = 0; i < nf; i++){
      for(int j = 0; j < nf; j++){
        EXPECT_NEAR(S_11_bar[i][j], ffr->S_kl_bar[0][0](i,j), abs_error);
      }
    }

    double S_23_bar[5][5] ={
                             { 0.000027522608173e5,  3.111756506853872e5, 0.740114712378540e5,  0.004876047169950e5,  0.023470053354476e5 },
                             {-0.000005635145784e5,  0.098251872863188e5, 0.317093275422378e5, -0.000067641926961e5, -0.000664120638737e5 },
                             {-0.000016098642858e5,  0.286251580280245e5, 0.909689975560354e5, -0.000187771066902e5, -0.001873541685133e5 },
                             {-0.000017400952576e5, -0.748090448556823e5, 0.318466106872937e5, -0.001595475904317e5, -0.008242036418927e5 },
                             {-0.000005012270038e5,  0.783361603667231e5, 0.764009547363906e5,  0.000591961360891e5,  0.002223045850449e5 }
                           };
    for (int i = 0; i < nf; i++){
      for(int j = 0; j < nf; j++){
        EXPECT_NEAR(S_23_bar[i][j], ffr->S_kl_bar[1][2](i,j), abs_error);
      }
    }

    double I_13_bar[5] = {0.000023753889314e7, 2.990173027420840e7, 1.514548024156898e7, 0.000538276934751e7, 0.002366539974964e7};
    for (int i = 0; i < nf; i++){
        EXPECT_NEAR(I_13_bar[i], ffr->I_kl_bar[0][2](i), abs_error);
    }

    double I_23_bar[5] = {0.000000063975573e6, 3.175152311622534e6, 1.546849894638678e6, 0.006838647630887e6, 0.031516810523271e6};
    for (int i = 0; i < nf; i++){
        EXPECT_NEAR(I_23_bar[i], ffr->I_kl_bar[1][2](i), abs_error);
    }

  }

  TEST_F(linearExternalFFRTest, initM){
    double M[6 + 5][6 + 5] = {
        { 0.000478623798785e9,                    0,                     0,   0.000000000000000e9,  -0.011823241485765e9,  -0.018106569294707e9,  -0.000217470140036e9,   0.000295922649150e9,   0.000091093809338e9,   0.000117317672934e9,   0.000025532756631e9},
        {                   0,  0.000478623798785e9,                     0,  -0.007867341812957e9,   0.005842501599633e9,  -0.001753563063343e9,  -0.000068685173991e9,  -0.000085274490217e9,  -0.000026054209080e9,   0.000227376951349e9,   0.000239313948905e9},
        {                   0,                    0,   0.000478623798785e9,   0.037273118712082e9,  -0.010119509613867e9,   0.035200718482753e9,   0.000395290573621e9,   0.000148881393219e9,   0.000048949723789e9,  -0.000102165582993e9,   0.000092780612216e9},
        { 0.000000000000000e9, -0.007867341812957e9,   0.037273118712082e9,   3.603874623267460e9,  -0.928952932608056e9,   3.279540709431475e9,   0.000001069781523e9,   0.000000612372583e9,   0.000000804302113e9,  -0.000001586755933e9,  -0.000001340125794e9},
        {-0.011823241485765e9,  0.005842501599633e9,  -0.010119509613867e9,  -0.928952932608056e9,   0.744059489404750e9,  -0.229774364065843e9,  -0.000001412148990e9,   0.000000152137327e9,  -0.000000136329344e9,   0.000000924286462e9,   0.000000354876816e9},
        {-0.018106569294707e9, -0.001753563063343e9,   0.035200718482753e9,   3.279540709431475e9,  -0.229774364065843e9,   3.837500991903189e9,   0.000001252188211e9,   0.000000056012753e9,   0.000000271889328e9,  -0.000001024074527e9,  -0.000000570607645e9},
        {-0.000217470140036e9, -0.000068685173991e9,   0.000395290573621e9,   0.000001069781523e9,  -0.000001412148990e9,   0.000001252188211e9,   0.000457476453018e9,  -0.000004684969618e9,  -0.000001169997303e9,  -0.000224817833809e9,  -0.000022135894398e9},
        { 0.000295922649150e9, -0.000085274490217e9,   0.000148881393219e9,   0.000000612372583e9,   0.000000152137327e9,   0.000000056012753e9,  -0.000004684969618e9,   0.000274765213713e9,   0.000174986331154e9,   0.000013523105316e9,   0.000015101451464e9},
        { 0.000091093809338e9, -0.000026054209080e9,   0.000048949723789e9,   0.000000804302113e9,  -0.000000136329344e9,   0.000000271889328e9,  -0.000001169997303e9,   0.000174986331154e9,   0.000355769042744e9,   0.000008975266959e9,   0.000010260828647e9},
        { 0.000117317672934e9,  0.000227376951349e9,  -0.000102165582993e9,  -0.000001586755933e9,   0.000000924286462e9,  -0.000001024074527e9,  -0.000224817833809e9,   0.000013523105316e9,   0.000008975266959e9,   0.000291700616014e9,   0.000229618406151e9},
        { 0.000025532756631e9,  0.000239313948905e9,   0.000092780612216e9,  -0.000001340125794e9,   0.000000354876816e9,  -0.000000570607645e9,  -0.000022135894398e9,   0.000015101451464e9,   0.000010260828647e9,   0.000229618406151e9,   0.000266475992173e9}
    };

    for (int i = 0; i < 6 + nf; i++){
      for(int j = 0; j < 6 + nf; j++){
        EXPECT_NEAR(M[i][j], ffr->M(i,j), abs_error) << "i =" << i << "  j =" << j << " M= " << ffr->M;
      }
    }

  }

//  TEST_F(linearExternalFFRTest, initQv){
////    ffr->initQv();
//    double Qv[6 + 5] = {};
//    for (int i = 0; i < 6 + nf; i++){
//        EXPECT_NEAR(Qv[i], ffr->Qv(i), abs_error);
//      }
//  }

  TEST_F(linearExternalFFRTest, updateAGGDot){
    double A[3][3] = {
        {0.250000000000000, -0.433012701892219,  0.866025403784439},
        {0.966506350946110,  0.058012701892220, -0.250000000000000},
        {0.058012701892219,  0.899519052838329,  0.433012701892219},
    };
    double G[3][3] = {
                { 0.250000000000000, 0.866025403784439,                 0},
                {-0.433012701892219, 0.500000000000000,                 0},
                { 0.866025403784439,                 0, 1.000000000000000},
    };
    double G_Dot[3][3] = {
                {-0.866025403784439,  0.500000000000000, 0},
                { 0.500000000000000, -0.866025403784439, 0},
                { 0.500000000000000,                  0, 0},
    };

    for (int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        EXPECT_NEAR(A[i][j], ffr->A(i,j), abs_error);
        EXPECT_NEAR(G[i][j], ffr->G(i,j), abs_error);
        EXPECT_NEAR(G_Dot[i][j], ffr->G_Dot(i,j), abs_error);
      }
    }

  }
//
//  TEST_F(linearExternalFFRTest, updateM){
//    Vec q0 = Vec(5 + 6, INIT, 0.0);
//    q0 = {}; //TODO add some value for testing
//
//    ffr->setq0(q0);
//    ffr->updateAGGDot();
//
//    ffr->updateM(1);
//    double M[6 + 5][6 + 5] = {};
//    for (int i = 0; i < 6 + nf; i++){
//      for(int j = 0; j < 6 + nf; j++){
//        EXPECT_NEAR(M[i][j], ffr->M(i,j), abs_error);
//      }
//    }
//
//  }
//
  TEST_F(linearExternalFFRTest, updateQv){
//    Vec q0 = Vec(5 + 6, INIT, 0.0);
//    Vec u0 = Vec(5 + 6, INIT, 0.0);
//    q0 = {}; //TODO add some value for testing
//    u0 = {}; //TODO add some value for testing

//    ffr->setq0(q0);
//    ffr->setu0(u0);

//    ffr->updateAGGDot();
//
//    ffr->updateQv();

    double Qv[6 + 5] = {
                        -2937518750.11130619049072266,
                         9611502902.14000129699707031,
                        -2045207654.35557413101196289,
                        -112133238274.89114379882812500,
                         15895974601.22756958007812500,
                        -54951659900.41123962402343750,
                        -2130839060.33141708374023438,
                        -4399843997.74901199340820312,
                        -2548707526.39382410049438477,
                         5322361810.66144180297851562,
                         5489866965.91161346435546875
                       };

    for (int i = 0; i < 6 + nf; i++){
        EXPECT_NEAR(Qv[i], ffr->Qv(i), abs_error) << "i = " << i;
      }

  }

}