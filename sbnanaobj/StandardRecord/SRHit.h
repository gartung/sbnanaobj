////////////////////////////////////////////////////////////////////////
// \file    SRHit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRHIT_H
#define SRHIT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  class SRSpacePoint
  {
    public:
      SRSpacePoint();
      ~SRSpacePoint(){  }

      SRVector3D XYZ;
      double Chisq;

      int pfpID; // PFP ID that this spacepoint belongs to; -1 if no PFP
  };

  /// Representation of a rb::Shower, knows energy and direction, but not a list
  /// of hits.
  class SRHit
    {
    public:
      SRHit();
      ~SRHit(){  }
      float startTick;
      float endTick;

      float RMS;

      float peakAmplitude;
      float summedADC;
      float integral;

      int cryoID;
      int tpcID;
      int planeID;
      int wireID;

      SRSpacePoint spacepoint;
    };

} // end namespace

#endif // SRHIT_H
//////////////////////////////////////////////////////////////////////////////
