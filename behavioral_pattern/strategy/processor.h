#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_PROCESSER_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_PROCESSER_H_

#include "abstract_operation.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Processor {
 public:
  Processor(AbstractOperation *operation_);

  void setOperation(AbstractOperation *operation_);

  float execute(float num1, float num2);

 private:
  AbstractOperation *operation;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_PROCESSER_H_
