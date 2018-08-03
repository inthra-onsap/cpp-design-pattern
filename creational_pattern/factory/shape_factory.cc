#include "shape_factory.h"

namespace cpp_design_pattern {
namespace creational_pattern {

void ShapeFactory::registerClass(std::string className, InterfaceShape *(*instanciator)()) {
  container[className] = instanciator;
}

InterfaceShape *ShapeFactory::getInstance(std::string className) {
  return container[className]();
}

} // namespace creational_pattern
} // namespace cpp_design_pattern


