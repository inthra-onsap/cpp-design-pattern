#ifndef CPP_DESIGN_PATTERN_FACTORY_RECTANGLE_H
#define CPP_DESIGN_PATTERN_FACTORY_RECTANGLE_H

#include "abstract_shape.h"

namespace cpp_design_pattern {
namespace creational_pattern {

class Rectangle: public AbstractShape {
 public:
  virtual std::string draw();

  static AbstractShape* getInstance();
};

} // namespace creation_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_FACTORY_RECTANGLE_H
