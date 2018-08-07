#include "liquor.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Liquor::Liquor(double price_) : price{price_} {}

double Liquor::accept(AbstractVisitor *visitor) {
  return visitor->visit(this);
}

double Liquor::getPrice() {
  return price;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern