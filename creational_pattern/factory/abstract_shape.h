#ifndef CPP_DESIGN_PATTERN_FACTORY_ABSTRACT_SHAPE_H
#define CPP_DESIGN_PATTERN_FACTORY_ABSTRACT_SHAPE_H

#include <string>

namespace cpp_design_pattern {
namespace creational_pattern {

class AbstractShape {
 public:
  virtual std::string draw() = 0;
};

} // namespace creation_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_FACTORY_ABSTRACT_SHAPE_H
