#include "system.h"
#include "mbsim/joint.h"
#include "mbsim/contact.h"
#include "mbsim/contours/point.h"
#include "mbsim/contours/plane.h"
#include "mbsim/constitutive_laws.h"
#include "mbsim/utils/rotarymatrices.h"
#include "mbsim/environment.h"

#ifdef HAVE_OPENMBVCPPINTERFACE
#include <openmbvcppinterface/spineextrusion.h>
#include <openmbvcppinterface/cuboid.h>
#include <openmbvcppinterface/polygonpoint.h>
#endif

using namespace MBSimFlexibleBody;
using namespace MBSim;
using namespace fmatvec;
using namespace std;

System::System(const string &projectName) : DynamicSystemSolver(projectName) {
  Vec grav(3,INIT,0.); grav(1) = -9.81;
  MBSimEnvironment::getInstance()->setAccelerationOfGravity(grav);

  FlexibleBodyLinearExternalFFR *beam = new FlexibleBodyLinearExternalFFR("beam", false);

//  setPlotFeature(plotRecursive, disabled);

  string inFilePath = "/home/zwang/MBSim/Students/FFR_FlexibleBody/FEM_data/original/";
//  string inFilePath = "/home/zwang/MBSim/Students/FFR_FlexibleBody/FEM_data/dataForUnitTest/";

  beam->readFEMData(inFilePath);

//  int elements = beam->getNumberElements();
  int nf = beam->getNumberModes();

  beam->setFrameOfReference(this->getFrame("I"));

  // set a initial angle for the body reference
  Vec q0 = Vec(nf + 6, INIT, 0.0);
  Vec u0 = Vec(nf + 6, INIT, 0.0);
//  q0(0) = 0.2;
//  q0(1) = 0.3;
//  q0(2) = 0.4;
//  q0(3) = M_PI / 6;
//  q0(4) = M_PI / 3;
//  q0(5) = M_PI / 3;
//
//  q0(6) = 0.1;
//  q0(7) = 0.1;
  q0(8) = 0.1;
//  q0(9) = 0.002;
//  q0(10) = 0.003;
//
//  u0(0) = 2;
//  u0(1) = 3;
//  u0(2) = 4;
//  u0(3) = 10 * M_PI / 6;
//  u0(4) = 10 * M_PI / 3;
//  u0(5) = 10 * M_PI / 3;
//
//  u0(6) = 0.02;
//  u0(7) = 0.03;
//  u0(8) = 0.04;
//  u0(9) = 0.02;
//  u0(10) = 0.03;

  beam->setq0(q0);
  beam->setu0(u0);

  Joint * fix = new Joint("Fix");
  fix->connect(getFrameI(), beam->getFloatingFrameOfReference());
  fix->setForceDirection(Mat3x3(EYE));
  fix->setMomentDirection(Mat3x3(EYE));
  fix->setForceLaw(new BilateralConstraint);
  fix->setImpactForceLaw(new BilateralImpact);
  fix->setMomentLaw(new BilateralConstraint);
  fix->setImpactMomentLaw(new BilateralImpact);
  addLink(fix);

  this->addObject(beam);

} 

