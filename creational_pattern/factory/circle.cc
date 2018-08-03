#include "circle.h"

namespace cpp_design_pattern {
namespace creational_pattern {

std::string Circle::draw() {
  return "Draw Circle";
}

InterfaceShape* Circle::getInstance() {
  return new Circle();
}

} // namespace creation_pattern
} // namespace cpp_design_pattern