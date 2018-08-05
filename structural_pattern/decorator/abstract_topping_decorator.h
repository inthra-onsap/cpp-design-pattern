#ifndef CPP_DESIGN_PATTERN_ABTRACT_TOPPING_DECORATOR_H_
#define CPP_DESIGN_PATTERN_ABTRACT_TOPPING_DECORATOR_H_

#include "abstract_pizza.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractToppingDecorator : public AbstractPizza {
 public:
  AbstractToppingDecorator(AbstractPizza *pizza_);

  ~AbstractToppingDecorator();

  virtual std::string getDescription();

  virtual float getCost();

 protected:
  AbstractPizza *pizza;

};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_ABTRACT_TOPPING_DECORATOR_H_
