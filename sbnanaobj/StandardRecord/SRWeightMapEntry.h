#ifndef SRWEIGHTMAPENTRY_H
#define SRWEIGHTMAPENTRY_H

#include "sbnanaobj/StandardRecord/SRWeightParam.h"

#include <vector>

namespace caf
{
  class SRWeightMapEntry
  {
  public:
    // Serialization requires a default constructor
    SRWeightMapEntry() {}

    SRWeightMapEntry(const SRWeightParam& p,
                     const std::vector<float>& vs) : param(p), vals(vs) {}

    SRWeightParam param;
    std::vector<float> vals;
  };
}

#endif
