#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_TOMATO_SAUCE_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_TOMATO_SAUCE_H_

#include "abstract_topping_decorator.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class TomatoSauce: AbstractToppingDecorator {
 public:
  TomatoSauce(AbstractPizza *pizza_);

  virtual std::string getDescription();

  virtual float getCost();
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_TOMATO_SAUCE_H_
