#include "sell_command.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

SellCommand::SellCommand(Stock *stock_) : AbstractCommand(stock_) {}

std::string SellCommand::execute() {
  return stock->sell();
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern