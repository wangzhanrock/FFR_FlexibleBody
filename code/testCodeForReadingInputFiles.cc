#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "/home/zwang/MBSim/fmatvec/src/fmatvec.h"

void main(){
  /**
   * \brief lumped mass for each node
   */
  std::vector<double> mij;

  /**
   * \brief lumped mass for each node
   */
  fmatvec::Mat* phi;

  /**
   * \brief initial position of each node
   */
  std::vector<fmatvec::Vec> u0;

    ifstream mijInfile("../FEM_data/mij.dat");
    for (double a; in>>a;) mij.push_back(a);

    // read u0
    ifstream u0Infile("../FEM_data/u0.dat");
    for(string s; getline(mijInfile, s);){
      fmatvec::Vec u0Line(3);
      istringstream sin(s);
      int i = 0;
      for (double temp; sin>>temp; i++){
        u0Line(i) = temp;
      }
      u0.push_back(u0Line);
    }

    // read mode shape matrix
    phi = new Mat(3*nj, nf, INIT, 0.);
    ifstream mijInfile("../FEM_data/modeShapeMatrix.dat");
    int row = 0;
    for(string s; getline(mijInfile, s); row++){
      istringstream sin(s);
      int i = 0;
      for (double temp; sin>>temp; i++)
        *phi(row,i) = temp;
    }

    // read stiffness matrix
    SymMat Kext(3*nj,INIT,0.);
    ifstream KInfile("../FEM_data/FrequencyJob_STIF2.mtx");
    for(string s; getline(KInfile, s);){
      std::vector<double> KLine;
      istringstream sin(s);
      for (double temp; sin>>temp; )
        KLine.push_back(temp);
      Kext(3*KLine[0]+KLine[1]-4,3*KLine[2]+KLine[3]-4) = KLine[4];
    }
}
