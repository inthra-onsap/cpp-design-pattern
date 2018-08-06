#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_STOCK_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_STOCK_H_

#include <string>
#include <iostream>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Stock {
 public:
  Stock();

  std::string sell();

  std::string buy();

 private:
  int quantity;
  std::string name;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_STOCK_H_
