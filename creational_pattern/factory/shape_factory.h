#ifndef CPP_DESIGN_PATTERN_SHAPE_FACTORY_H_
#define CPP_DESIGN_PATTERN_SHAPE_FACTORY_H_

#include "circle.h"
#include "rectangle.h"
#include "square.h"

#include <exception>
#include <unordered_map>

namespace cpp_design_pattern {
namespace creational_pattern {

typedef std::unordered_map<std::string, InterfaceShape *(*)()> CLASS_CONTAINER;

class ShapeFactory {
 public:
  void registerClass(std::string className, InterfaceShape *(* instanciator)());

  InterfaceShape *getInstance(std::string className);

 private:
  CLASS_CONTAINER container;
};

} // namespace creational_pattern
} // namespace cpp_design_pattern


#endif //CPP_DESIGN_PATTERN_SHAPE_FACTORY_H_
