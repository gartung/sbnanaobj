////////////////////////////////////////////////////////////////////////
// \file    SRFakeRecoParticle.cxx
// \brief   SRFakeRecoParticle holds true interaction info.
// \author  $Author: grayputnam@uchicago.edu
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRFakeRecoParticle.h"


namespace caf
{

  SRFakeRecoParticle::SRFakeRecoParticle():
    ke(std::numeric_limits<float>::signaling_NaN()),
    costh(std::numeric_limits<float>::signaling_NaN()),
    len(std::numeric_limits<float>::signaling_NaN()),
    pid(-999),
    contained(false)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
