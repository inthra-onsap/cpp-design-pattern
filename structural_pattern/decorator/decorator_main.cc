#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_DECORATOR_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_DECORATOR_H_

#include "pizza.h"
#include "cheeze_topping.h"
#include "tomato_sauce.h"

#include <cassert>

namespace cpp_design_pattern {
namespace structural_pattern {

class DecoratorMain {
 public:
  void run() {
    Pizza *pizza = new Pizza();
    CheeseTopping *cheeseToppingPizza = new CheeseTopping(pizza);
    TomatoSauce *tomatoSaucePizza = new TomatoSauce(cheeseToppingPizza);

    assert("this is thin pizza, cheeze added, tomato sauce added" == tomatoSaucePizza->getDescription());
    assert(6.0f == tomatoSaucePizza->getCost());

    delete tomatoSaucePizza;
  }
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_DECORATOR_H_

