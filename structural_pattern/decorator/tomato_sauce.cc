#include "tomato_sauce.h"

namespace cpp_design_pattern {
namespace structural_pattern {

TomatoSauce::TomatoSauce(AbstractPizza *pizza_) : AbstractToppingDecorator(pizza_) {}

std::string TomatoSauce::getDescription() {
  return pizza->getDescription() + ", tomato sauce added";
}

float TomatoSauce::getCost() {
  return pizza->getCost() + 0.5f;
}

} //namespace structural_pattern
} //namespace cpp_design_pattern