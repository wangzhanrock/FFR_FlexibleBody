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

#ifndef NurbsCurve1sSameAngularVelocites_H_
#define NurbsCurve1sSameAngularVelocites_H_

#include "fmatvec/fmatvec.h"
#include "mbsim/mbsim_event.h"
//#include "mbsim/contours/contour1s.h"

#include "mbsimFlexibleBody/contours/nurbs_curve_1s.h"
#include <mbsim/numerics/nurbs/nurbs_curve.h>

namespace MBSimFlexibleBody {

  /*!  
   * \brief contour 1s flexible with NURBS parametrization
   * \author Thorsten Schindler
   * \author Kilian Grundl
   * \date 2011-10-16 initial commit (Thorsten Schindler)
   * \date 2012-03-15 updateKinematicsForFrame and contact Jacobians (Cebulla / Schindler)
   * \date 2013-02-04 contour now for 2D and 3D Cosserat beam (Zitzewitz / Cebulla / Schindler)
   * \date 2013-08-19 using self implemented nurbs-curve
   */
  class NurbsCurve1sSameAngularVelocites : public NurbsCurve1s {
    public:
      /**
       * \brief constructor 
       * \param name of contour
       */
      NurbsCurve1sSameAngularVelocites(const std::string &name);

      /**
       * \brief destructor
       */
      virtual ~NurbsCurve1sSameAngularVelocites();

      /* INHERITED INTERFACE OF ELEMENT */
      virtual std::string getType() const {
        return "NurbsCurve1sSameAngularVelocites";
      }

      /***************************************************/

      /* OVERWRITE METHOD OF NURBSCURVE1S */
      virtual void init(MBSim::InitStage stage);
      virtual void updateKinematicsForFrame(MBSim::ContourPointData &cp, MBSim::FrameFeature ff);
      virtual void updateJacobiansForFrame(MBSim::ContourPointData &cp, int j = 0);
      void NurbsCurve1sSameAngularVelocites::computeCurveAngularVelocities(bool update) {
        throw MBSim::MBSimError("ERROR(NurbsCurve1sSameAngularVelocites::computeCurveAngularVelocities(): Not implemented! Every point has a same angular velocity.");
      }
      /***************************************************/

      /* GETTER / SETTER */

      /***************************************************/

//      /**
//       * \brief initialize NURBS curve
//       * \param stage of initialisation
//       */
//      void initContourFromBody(MBSim::InitStage stage);

//      /*!
//       * \brief interpolates the translations with node-data from body
//       */
//      void computeCurveTranslations(bool update = false);
//
//      /*!
//       * \brief interpolates the velocities with the node-data from the body
//       */
//      void computeCurveVelocities(bool update = false);

//      /*!
//       * \brief interpolates the angular velocities with the node-data from the body
//       */
//      void computeCurveAngularVelocities(bool update = false);

      /*!
       * \brief interpolates the Jacobians of translation with the node-data from the body
       * \param interpolate translational jacobian
       * \param interpolate rotational jacobian
       */
      void computeCurveJacobians(bool trans = true, bool rot = true, bool update = false);

    protected:
//      /**
//       * \brief number of elements
//       */
//      int Elements;
//
//      /**
//       * \brief number of DOFs
//       */
//      int qSize;
//
//      /**
//       * \brief open or closed beam structure
//       */
//      bool openStructure;
//
//      /**
//       * \brief length of entire curve
//       */
//      double L;
//
//      /**
//       * \brief interpolation degree
//       */
//      int degU;
//
//      /**
//       * \brief interpolated translations of the contour
//       */
//      MBSim::NurbsCurve curveTranslations;
//
//      /**
//       * \brief interpolated velocities of the contour
//       */
//      MBSim::NurbsCurve curveVelocities;
//
//      /**
//       * \brief interpolated angular velocities of the contour
//       */
//      MBSim::NurbsCurve curveAngularVelocities;
//
//      /**
//       * \brief closest normal on rotation grid to update direction of normal of nurbs-curve and to avoid jumping
//       */
//      fmatvec::Vec3 normalRotationGrid;
//
//      /**
//       * \brief Jacobians of Translation of finite element nodes
//       */
//      std::vector<MBSim::ContourPointData> jacobiansTrans; // size = number of interpolation points
//
//      /**
//       * \brief Jacobians of Rotation of finite element nodes
//       */
//      std::vector<MBSim::ContourPointData> jacobiansRot; // size = number of interpolation points
//
//      /**
//       * \brief interpolated Jacobians of Translation of the contour
//       */
//      std::vector<MBSim::NurbsCurve> CurveJacobiansOfTranslation; // size = number of generalized coordinates
//
//      /**
//       * \brief interpolated Jacobians of Rotation on the contour
//       */
//      std::vector<MBSim::NurbsCurve> CurveJacobiansOfRotation; // size = number of generalized coordinates

  };

}

#endif /* NurbsCurve1sSameAngularVelocites_H_ */

