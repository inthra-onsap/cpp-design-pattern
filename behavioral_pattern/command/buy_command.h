#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_BUY_COMMAND_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_BUY_COMMAND_H_

#include "abstract_command.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class BuyCommand : public AbstractCommand {
 public:
  BuyCommand(Stock *stock_);

  virtual std::string execute();

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_BUY_COMMAND_H_
