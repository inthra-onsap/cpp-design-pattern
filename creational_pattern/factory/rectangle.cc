#include "rectangle.h"

namespace cpp_design_pattern {
namespace creational_pattern {

std::string Rectangle::draw() {
  return "Draw Rectangle";
}

InterfaceShape* Rectangle::getInstance() {
  return new Rectangle();
}


} // namespace creation_pattern
} // namespace cpp_design_pattern