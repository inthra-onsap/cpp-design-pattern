#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_CHAIN_OF_RESPONSIBILITY_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_CHAIN_OF_RESPONSIBILITY_H_;

#include "number.h"
#include "add_number_chain.h"
#include "minus_number_chain.h"

#include <cassert>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class ChainOfResponsibilityMain {
 public:
  void run() {
    Number *number1 = new Number(5, 10, '-');
    Number *number2 = new Number(50, 70, '+');
    AddNumberChain *addNumberChain = new AddNumberChain();
    MinusNumberChain *minusNumberChain = new MinusNumberChain();

    addNumberChain->setNextChain(minusNumberChain);

    assert(-5 == addNumberChain->doTask(number1));
    assert(120 == addNumberChain->doTask(number2));


    delete number1;
    delete number2;
    delete addNumberChain;
    delete minusNumberChain;
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_CHAIN_OF_RESPONSIBILITY_H_