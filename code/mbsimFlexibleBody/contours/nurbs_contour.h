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

#ifndef _NURBS_CONTOUR_H_
#define _NURBS_CONTOUR_H_

//#include "fmatvec/fmatvec.h"
//#include "mbsim/mbsim_event.h"
//#include "mbsim/contours/contour1s.h"

//#include "mbsim/contour.h"
#include "mbsim/contours/contour_continuum.h"
//#include <mbsim/numerics/nurbs/nurbs_curve.h>

namespace MBSimFlexibleBody {
  class FlexibleBody1sCosserat;
  class FlexibleBody1s33Cosserat;
  class FlexibleBodyLinearExternalFFR;
  /*!  
   * \brief interface for contour with NURBS parametrization
   * \author Kilian Grundl
   * \author Zhan Wang
   * \date 2013-09-23 initial commit (Zhan Wang)
   */
  class NurbsContour : public MBSim::ContourContinuum<double> {
    public:
      /**
       * \brief constructor 
       * \param name of contour
       */
      NurbsContour(const std::string &name);

      /**
       * \brief destructor
       */
      virtual ~NurbsContour();

      /* INHERITED INTERFACE OF ELEMENT */
      virtual std::string getType() const {
        return "NurbsContour";
      }
      /***************************************************/


      /* INHERITED INTERFACE OF CONTOUR */
      virtual void updateKinematicsForFrame(MBSim::ContourPointData &cp, MBSim::FrameFeature ff) = 0;
      virtual void updateJacobiansForFrame(MBSim::ContourPointData &cp, int j = 0) = 0;
      virtual MBSim::ContactKinematics *findContactPairingWith(std::string type0, std::string type1) {
        throw MBSim::MBSimError("ERROR(NurbsContour::findContactPairingWith): Not implemented!");
      }
      /***************************************************/



      /* GETTER / SETTER */
//      void setNormalRotationGrid(fmatvec::Vec normal_) {
//        normalRotationGrid = normal_(0,2);
//      }
      /***************************************************/

      /**
       * \brief initialize NURBS curve 
       * \param stage of initialisation
       */
//      void initContourFromBody(MBSim::InitStage stage) = 0;

      virtual void setOpenStructure(bool openStructure_) = 0;

      /*! 
       * \brief interpolates the translations with node-data from body
       */
      virtual void computeCurveTranslations(bool update = false) = 0;

      /*!
       * \brief interpolates the velocities with the node-data from the body
       */
      virtual void computeCurveVelocities(bool update = false) = 0;

      /*!
       * \brief interpolates the angular velocities with the node-data from the body
       */
      virtual void computeCurveAngularVelocities(bool update = false) = 0;

      /*!
       * \brief interpolates the Jacobians of translation with the node-data from the body
       * \param interpolate translational jacobian
       * \param interpolate rotational jacobian
       */
      virtual void computeCurveJacobians(bool trans = true, bool rot = true, bool update = false) = 0;

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
////      /**
////       * \brief length of entire curve
////       */
////      double L;
//
//      /**
//       * \brief interpolation degree
//       */
//      int degU;

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

//  NurbsCurve1s contour = new NurbsCurve1s (const std::string& name_, FlexibleBody* parent_, std::vector<double>& nodes_, double uMin_, double uMax_, bool openStructure_ );

//  NurbsContour* createNurbsContour(const std::string& name_, FlexibleBody1sCosserat* parent_, std::vector<double>& nodes_, double uMin_, double uMax_, bool openStructure_ );
//  NurbsContour* createNurbsContour(const std::string& name, FlexibleBody1s33Cosserat* parent_, std::vector<double>& nodes_, double uMin_, double uMax_, bool openStructure_ );
//  NurbsContour* createNurbsContour(const std::string& name, FlexibleBodyLinearExternalFFR* parent_, std::vector<double>& nodes_, double uMin_, double uMax_, bool openStructure_ );

//  NurbsContour& createNurbsContour(const std::string& name, FlexibleBody1sCosserat& parent, std::vector<double>& nodes, bool surface );
//  NurbsContour& createNurbsContour(const std::string& name, FlexibleBody1s33Cosserat& parent, std::vector<double>& nodes, bool surface );
//  NurbsContour& createNurbsContour(const std::string& name, FlexibleBodyLinearExternalFFR& parent, std::vector<double>& nodes, bool surface );
}

#endif /* _NURBS_CONTOUR_H_ */

