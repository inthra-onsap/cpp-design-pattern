#include "abstract_topping_decorator.h"

namespace cpp_design_pattern {
namespace structural_pattern {

AbstractToppingDecorator::AbstractToppingDecorator(AbstractPizza *pizza_) : pizza{pizza_} {}

AbstractToppingDecorator::~AbstractToppingDecorator() {
  delete pizza;
}

std::string AbstractToppingDecorator::getDescription() {
  return pizza->getDescription();
}

float AbstractToppingDecorator::getCost() {
  return pizza->getCost();
}

} //namespace structural_pattern
} //namespace cpp_design_pattern