////////////////////////////////////////////////////////////////////////
// \file    StandardRecord.cxx
// \brief   StandardRecord defines top-level objects for
//          Common Analysis File trees.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/StandardRecord.h"


namespace caf
{

  StandardRecord::StandardRecord():
  hdr(),
  //  spill(),
  reco(),
  mc()
  {  }

  StandardRecord::~StandardRecord(){


  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
