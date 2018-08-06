#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_COMMAND_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_COMMAND_H_

#include "stock.h"

#include <string>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractCommand {
 public:
  AbstractCommand(Stock *stock_) : stock{stock_} {}

  virtual std::string execute() = 0;

 protected:
  Stock *stock;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_COMMAND_H_
