/*
 * neutral_nurbs_local_position_2s.h
 *
 *  Created on: 04.12.2013
 *      Author: zwang
 */

#ifndef _NEUTRAL_NURBS_LOCAL_POSITION_2S_H_
#define _NEUTRAL_NURBS_LOCAL_POSITION_2S_H_

#include "neutral_nurbs_2s.h"

namespace MBSimFlexibleBody {
  
  class NeutralNurbsLocalPosition2s : public MBSimFlexibleBody::NeutralNurbs2s {
    public:
      NeutralNurbsLocalPosition2s(Element* parent_, fmatvec::GeneralMatrix<ContourPointData>& transContourPoints_, double nodeOffset, int degU_, int degV_, bool openStructure_);
      virtual ~NeutralNurbsLocalPosition2s();
      virtual void update(ContourPointData &cp) ;
    protected:
      virtual void buildNodelist();
  };

} /* namespace MBSimFlexibleBody */
#endif
