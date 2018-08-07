#ifndef CPP_DESIGN_PATTERN_STRATEGY_STRATEGY_MAIN_H_
#define CPP_DESIGN_PATTERN_STRATEGY_STRATEGY_MAIN_H_

#include "processor.h"
#include "add_operation.h"
#include "minus_operation.h"

#include<cassert>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class StrategyMain {
 public:
  void run() {
    AddOperation *addOperation = new AddOperation();
    MinusOperation *minusOperation = new MinusOperation();

    Processor processor(addOperation);
    assert(5.0f == processor.execute(3, 2));

    processor.setOperation(minusOperation);
    assert(1.0f == processor.execute(3, 2));

    delete addOperation;
    delete minusOperation;
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRATEGY_STRATEGY_MAIN_H_
