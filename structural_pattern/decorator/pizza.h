#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_PIZZA_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_PIZZA_H_

#include "abstract_pizza.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class Pizza : public AbstractPizza {
 public:
  virtual std::string getDescription();

  virtual float getCost();
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_PIZZA_H_
