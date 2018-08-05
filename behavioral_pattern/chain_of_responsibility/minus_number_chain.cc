#include "minus_number_chain.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void MinusNumberChain::setNextChain(AbstractChain *nextChain_) {
  nextChain = nextChain_;
}

int MinusNumberChain::doTask(Number *number) {
  if (number->getOperator() == '-') {
    return number->getNOne() - number->getNTwo();
  }

  return nextChain->doTask(number);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern