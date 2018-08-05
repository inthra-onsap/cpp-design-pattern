#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_CHAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_CHAIN_H_

#include "number.h"

#include <iostream>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractChain {
 public:

  virtual void setNextChain(AbstractChain *nextChain_) = 0;

  virtual int doTask(Number *number) = 0;

 protected:
  AbstractChain *nextChain;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_CHAIN_H_
