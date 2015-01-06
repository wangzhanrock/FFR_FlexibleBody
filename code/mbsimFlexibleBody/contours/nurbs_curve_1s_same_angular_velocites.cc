/* Copyright (C) 2004-2012 MBSim Development Team
 *
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 *  
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 *  
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * Contact: thorsten.schindler@mytum.de
 */

#include<config.h>
#include "mbsimFlexibleBody/contours/nurbs_curve_1s_same_angular_velocites.h"
#include "mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h"

using namespace std;
using namespace fmatvec;
using namespace MBSim;

namespace MBSimFlexibleBody {

  NurbsCurve1sSameAngularVelocites::NurbsCurve1sSameAngularVelocites(const std::string &name) :
      NurbsCurve1s(name)/*, Elements(0), openStructure(false), L(0.), degU(0), curveTranslations(), curveVelocities(), /*curveAngularVelocities(),*/ /*normalRotationGrid()*/  {
  }

  NurbsCurve1sSameAngularVelocites::~NurbsCurve1sSameAngularVelocites() {
  }

  void NurbsCurve1sSameAngularVelocites::updateKinematicsForFrame(ContourPointData &cp, FrameFeature ff) {
    if (ff == position || ff == position_cosy || ff == all) {
      Vec3 Tmppt = curveTranslations.pointAt(cp.getLagrangeParameterPosition()(0));
      cp.getFrameOfReference().setPosition(Tmppt);
    }

    if (ff == velocity || ff == velocity_cosy || ff == velocities || ff == velocities_cosy || ff == all) {
      Vec3 Tmpv = curveVelocities.pointAt(cp.getLagrangeParameterPosition()(0));
      cp.getFrameOfReference().setVelocity(Tmpv);
    }

    if (ff == angularVelocity || ff == velocity_cosy || ff == velocities || ff == velocities_cosy || ff == all) {
      ContourPointData FFR(0, FFRORIGIN);
      static_cast<FlexibleContourBody*>(parent)->updateKinematicsForFrame(FFR, angularVelocity);
      // TODO: ??? setAngularAcceleration cp.getFrameOfReference().setAngularAcceleration(Tmpav);
      cp.getFrameOfReference().setAngularVelocity(FFR.getFrameOfReference().getAngularVelocity());
    }
  }

  void NurbsCurve1sSameAngularVelocites::updateJacobiansForFrame(ContourPointData &cp, int j /*=0*/) {
    cp.getFrameOfReference().getJacobianOfTranslation().resize(qSize);
//    cp.getFrameOfReference().getJacobianOfRotation().resize(qSize); // TODO open structure

    // Jacobian of Translation
    for (int k = 0; k < qSize; k++) {
      Vec3 TmpPtTrans = CurveJacobiansOfTranslation[k].pointAt(cp.getLagrangeParameterPosition()(0));
      // Vec3 TmpPtRot = CurveJacobiansOfRotation[k].pointAt(uStaggered);

      cp.getFrameOfReference().getJacobianOfTranslation().set(k, TmpPtTrans);
    }

    // Jacobian of Rotation
    ContourPointData FFR(0, FFRORIGIN);
    static_cast<FlexibleBodyLinearExternalFFR*>(parent)->updateKinematicsForFrame(FFR);
    cp.getFrameOfReference().getJacobianOfRotation().set(k, FFR.getFrameOfReference().getJacobianOfRotation());

  }

  virtual void init(MBSim::InitStage stage){
    if (stage == resize) {
      degU = 3;
      numOfNodes = nodes.size();
      if (openStructure) {
        numOfElements = numOfNodes - 1;
      }else{
        numOfElements = numOfNodes;
      }
//      Elements = (static_cast<FlexibleContourBody*>(parent))->getNumberElements();
      qSize = (static_cast<FlexibleBodyContinuum<double>*>(parent))->getqSize();
//      openStructure = (static_cast<FlexibleContourBody*>(parent))->isOpenStructure();
//      L = (static_cast<FlexibleContourBody*>(parent))->getLength();

      for (int i = 0; i < numOfNodes; i++) { // TODO openstructure: jacobians of Rotation different
        jacobiansTrans.push_back(ContourPointData(i));
//        jacobiansRot.push_back(ContourPointData(i, ROTNODE)); // jacobians of rotation are on staggered grid
      }
      for (int i = 0; i < Elements; i++) {
        jacobiansTrans[i].getFrameOfReference().getJacobianOfTranslation().resize();
//        jacobiansRot[i].getFrameOfReference().getJacobianOfRotation().resize();
      }

      for (int k = 0; k < qSize; k++) { // TODO openstructure: jacobians of Rotation different
        CurveJacobiansOfTranslation.push_back(NurbsCurve());
//        CurveJacobiansOfRotation.push_back(NurbsCurve());
      }

      computeCurveTranslations();
      computeCurveVelocities();
//      computeCurveAngularVelocities();
    }
    else if (stage == worldFrameContourLocation) {
      R->getOrientation() = (static_cast<FlexibleContourBody*>(parent))->getFrameOfReference()->getOrientation();
      R->getPosition() = (static_cast<FlexibleContourBody*>(parent))->getFrameOfReference()->getPosition();
    }

    Contour::init(stage);
  }

//  void NurbsCurve1sSameAngularVelocites::computeCurveTranslations(bool update) {
//
//    int nodes = Elements;
//    if (openStructure)
//      nodes++;
//
//    MatVx3 Nodelist(nodes, NONINIT);
//    for (int i = 0; i < nodes; i++) {
//      ContourPointData cp(i);
//      static_cast<FlexibleContourBody*>(parent)->updateKinematicsForFrame(cp, position);
//      Nodelist.set(i, trans(cp.getFrameOfReference().getPosition()));
//    }
//
//    if (update)
//      curveTranslations.update(Nodelist);
//    else {
//      if (openStructure) {
//        curveTranslations.globalInterp(Nodelist, 0, L, degU, true);
//      }
//      else {
//        curveTranslations.globalInterpClosed(Nodelist, 0, L, degU, true);
//      }
//    }
//  }
//
//  void NurbsCurve1sSameAngularVelocites::computeCurveVelocities(bool update) {
//    int nodes = Elements;
//    if (openStructure)
//      nodes++;
//
//    MatVx3 Nodelist(nodes, NONINIT);
//    for (int i = 0; i < nodes; i++) {
//      ContourPointData cp(i);
//      static_cast<FlexibleContourBody*>(parent)->updateKinematicsForFrame(cp, position);
//      Nodelist.set(i, trans(cp.getFrameOfReference().getVelocity()));
//    }
//
//    if (update)
//      curveVelocities.update(Nodelist);
//    else {
//      if (openStructure) {
//        curveVelocities.globalInterp(Nodelist, 0, L, degU, true);
//      }
//      else {
//        curveVelocities.globalInterpClosed(Nodelist, 0, L, degU, true);
//      }
//    }
//  }

//  void NurbsCurve1sSameAngularVelocites::computeCurveAngularVelocities(bool update) {
//    int nodes = Elements;
//    if (openStructure)
//      nodes++;
//
//    MatVx3 Nodelist(nodes, NONINIT);
//    for (int i = 0; i < nodes; i++) {
//      ContourPointData cp(i);
//      static_cast<FlexibleContourBody*>(parent)->updateKinematicsForFrame(cp, position);
//      Nodelist.set(i, trans(cp.getFrameOfReference().getAngularVelocity()));
//    }
//
//    if (update)
//      curveAngularVelocities.update(Nodelist);
//    else {
//      if (openStructure) {
//        curveAngularVelocities.globalInterp(Nodelist, 0, L, degU, true);
//      }
//      else {
//        curveAngularVelocities.globalInterpClosed(Nodelist, 0, L, degU, true);
//      }
//    }
//  }

  void NurbsCurve1sSameAngularVelocites::computeCurveJacobians(bool translational, bool rot, bool update) {
//TODO: All the if's should be unnecessary if every interpolation would be capsulated in two routines
//    if (openStructure)
//      nodes++;

    MatVx3 NodelistTrans(nodes, NONINIT);
//    MatVx3 NodelistRot(nodes, NONINIT);

    for (int i = 0; i < nodes; i++) {
      if (translational)
        static_cast<FlexibleContourBody*>(parent)->updateJacobiansForFrame(jacobiansTrans[i]);
//      if (rot)
//        static_cast<FlexibleContourBody*>(parent)->updateJacobiansForFrame(jacobiansRot[i]); // jacobians of rotation are on staggered grid
    }

    for (int k = 0; k < qSize; k++) {
      for (int i = 0; i < nodes; i++) {
        if (translational)
          NodelistTrans.set(i, trans(jacobiansTrans[i].getFrameOfReference().getJacobianOfTranslation(0).col(k)));

//        if (rot)
//          NodelistRot.set(i, trans(jacobiansRot[i].getFrameOfReference().getJacobianOfRotation(0).col(k)));

      }

      if (update) {
        if (translational)
          CurveJacobiansOfTranslation[k].update(NodelistTrans);
//        if (rot)
//          CurveJacobiansOfRotation[k].update(NodelistRot);
      }
      else {
//        if (openStructure) {
//        } // TODO
//        else {
          if (translational)
            CurveJacobiansOfTranslation[k].globalInterpClosed(NodelistTrans, 0, L, degU, true);
//          if (rot)
//            CurveJacobiansOfRotation[k].globalInterpClosed(NodelistRot, 0, L, degU, true);
//        }
      }
    }
  }

}

