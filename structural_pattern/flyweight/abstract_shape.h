#ifndef CPP_DESIGN_PATTERN_ABSTRACT_SHAPE_H
#define CPP_DESIGN_PATTERN_ABSTRACT_SHAPE_H

#include<string>
#include <iostream>

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractShape {
 public:
  virtual void drawCircle() = 0;

};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_ABSTRACT_SHAPE_H
