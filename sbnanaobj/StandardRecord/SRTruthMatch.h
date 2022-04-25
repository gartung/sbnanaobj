////////////////////////////////////////////////////////////////////////
// \file    SRTruthMatch.h
// \brief   SRTruthMatch object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRTRUTHMATCH_H
#define SRTRUTHMATCH_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"


namespace caf
{
  /// An  SRTruthMatch contains overarching information for a slice.
  class SRTruthMatch
    {
    public:

      SRTruthMatch();
      virtual ~SRTruthMatch();

      float      eff;           ///< Slice efficiency for this interaction
      float      eff_cryo;      ///< Slice efficiency for this interaction for energy in the slice's cryostat
      float      pur;           ///< Slice purity for this interaction
      float      visEinslc;     ///< True deposited energy in slice [GeV]
      float      visEcosmic;    ///< True slice deposited energy from cosmics
      int        index;         ///< Index of the matched true neutrino interaction (-1 if not matched to neutrino)

      void setDefault();

    };
} // end namespace

#endif // SRTRUTHMATCH_H
//////////////////////////////////////////////////////////////////////////////
