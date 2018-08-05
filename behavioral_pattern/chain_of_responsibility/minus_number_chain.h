#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_MINUS_NUMBER_CHAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_MINUS_NUMBER_CHAIN_H_
#include "abstract_chain.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class MinusNumberChain : public AbstractChain {
 public:
  virtual void setNextChain(AbstractChain *nextChain_);

  virtual int doTask(Number *number);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_MINUS_NUMBER_CHAIN_H_
