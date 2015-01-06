#include "mbsimFlexibleBody/utils/cardan.h"
#include "mbsimFlexibleBody/pointer.h"
#include "/home/zhan/MBSim/fmatvec/src/fmatvec.h"
#include <iostream>

using namespace fmatvec;
using namespace std;
using namespace MBSim;


int main(int argc, char* argv[]) {
	// CardanPtr angle;
	Cardan angle = Cardan();
	Vec3 angles = [0.2;0.3;0.5];
	Vec3 dotAngles = [0.1:0.25;0.4];

	angle->computeOmega(angles, dotAngles);


}
