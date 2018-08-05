#include "abstract_shape.h"

namespace cpp_design_pattern {
namespace structural_pattern {

AbstractShape::AbstractShape(AbstractStationary *stationary_) : stationary{stationary_} {
}

std::string AbstractShape::draw() {
  return "draw default shape by " + stationary->name();
}

} //namespace structural_pattern
} //namespace cpp_design_pattern