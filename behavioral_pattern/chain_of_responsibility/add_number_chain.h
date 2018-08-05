#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ADDNUMBERCHAIN_H
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ADDNUMBERCHAIN_H

#include "abstract_chain.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AddNumberChain : AbstractChain {
 public:
  virtual void setNextChain(AbstractChain *nextChain_);

  virtual int doTask(Number *number);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ADDNUMBERCHAIN_H
