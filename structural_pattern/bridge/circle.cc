#include "circle.h"

namespace cpp_design_pattern {
namespace structural_pattern {

Circle::Circle(AbstractStationary *stationary_) : AbstractShape(stationary_) {}

std::string Circle::draw() {
  return "draw circle shape by " + stationary->name();
}

} //namespace structural_pattern
} //namespace cpp_design_pattern