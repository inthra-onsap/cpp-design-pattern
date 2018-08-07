#include "processor.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Processor::Processor(AbstractOperation *operation_) : operation{operation_} {}

void Processor::setOperation(AbstractOperation *operation_) {
  operation = operation_;
}

float Processor::execute(float num1, float num2) {
  return operation->processOperation(num1, num2);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern