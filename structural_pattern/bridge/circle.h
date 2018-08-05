#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_

#include "abstract_shape.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class Circle : public AbstractShape {
 public:
  Circle(AbstractStationary *stationary_);

  virtual std::string draw();
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_
