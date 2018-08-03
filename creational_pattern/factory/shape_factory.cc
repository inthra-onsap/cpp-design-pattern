#include "shape_factory.h"

namespace cpp_design_pattern {
namespace creational_pattern {

void ShapeFactory::registerClass(std::string className, AbstractShape *(*instanciator)()) {
  container[className] = instanciator;
}

AbstractShape *ShapeFactory::getInstance(std::string className) {
  return container[className]();
}

} // namespace creational_pattern
} // namespace cpp_design_pattern


#endif //CPP_DESIGN_PATTERN_SHAPE_FACTORY_H
