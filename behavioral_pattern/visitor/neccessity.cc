#include "neccessity.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Necessity::Necessity(double price_) : price{price_} {}

double Necessity::accept(AbstractVisitor *visitor) {
  return visitor->visit(this);
}

double Necessity::getPrice() {
  return price;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern