/*
 * NeutralPosition1sNurbs.h
 *
 *  Created on: 24.10.2013
 *      Author: zwang
 */

#ifndef _NEUTRAL_NURBS_LOCAL_POSITION_1S_H_
#define _NEUTRAL_NURBS_LOCAL_POSITION_1S_H_

#include "neutral_nurbs.h"

namespace MBSimFlexibleBody {
  
  class NeutralNurbsLocalPosition1s : public MBSimFlexibleBody::NeutralNurbs {
    public:
      NeutralNurbsLocalPosition1s(Element* parent_, std::vector<ContourPointData>& transContourPoints_, double nodeOffset_, double uMin_, double uMax_, int degU_, bool openStructure_);
      virtual ~NeutralNurbsLocalPosition1s();
      virtual void update(ContourPointData &cp) ;
    protected:
      virtual void buildNodelist();
  };

} /* namespace MBSimFlexibleBody */
#endif
