#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ADD_OPERATION_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ADD_OPERATION_H_

#include "abstract_operation.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AddOperation : public AbstractOperation {
 public:
  virtual float processOperation(float num1, float num2);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ADD_OPERATION_H_