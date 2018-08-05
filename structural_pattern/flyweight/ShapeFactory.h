#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_SHAPEFACTORY_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_SHAPEFACTORY_H_

#include "circle_shape.h"

#include <unordered_map>

namespace cpp_design_pattern {
namespace structural_pattern {

class ShapeFactory {
 public:
  ~ShapeFactory();

  static AbstractShape *getCircle(std::string color);

 private:
  static std::unordered_map<std::string, CircleShape *> objCache;
};


} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_SHAPEFACTORY_H_
