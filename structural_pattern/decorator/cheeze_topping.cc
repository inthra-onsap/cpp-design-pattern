#include "cheeze_topping.h"

namespace cpp_design_pattern {
namespace structural_pattern {

CheeseTopping::CheeseTopping(AbstractPizza *pizza_) : AbstractToppingDecorator(pizza_) {}

std::string CheeseTopping::getDescription() {
  return pizza->getDescription() + ", cheeze added";
}

float CheeseTopping::getCost() {
  return pizza->getCost() + 1.5f;
}

} //namespace structural_pattern
} //namespace cpp_design_pattern