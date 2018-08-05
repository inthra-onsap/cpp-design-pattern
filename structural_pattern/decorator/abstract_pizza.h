#ifndef CPP_DESIGN_PATTERN_ABSTRACT_STRUCTURAL_PIZZA_H_
#define CPP_DESIGN_PATTERN_ABSTRACT_STRUCTURAL_PIZZA_H_

#include<string>

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractPizza {
 public:
  virtual std::string getDescription() = 0;

  virtual float getCost() = 0;
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_ABSTRACT_STRUCTURAL_PIZZA_H_
