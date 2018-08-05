#include "add_number_chain.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void AddNumberChain::setNextChain(AbstractChain *nextChain_) {
  nextChain = nextChain_;
}

int AddNumberChain::doTask(Number *number) {
  if (number->getOperator() == '+') {
    return number->getNOne() + number->getNTwo();
  }

  return nextChain->doTask(number);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern
