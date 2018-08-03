#include "square.h"

namespace cpp_design_pattern {
namespace creational_pattern {

std::string Square::draw() {
  return "Draw Square";
}

AbstractShape* Square::getInstance() {
  return new Square();
}

} // namespace creation_pattern
} // namespace cpp_design_pattern