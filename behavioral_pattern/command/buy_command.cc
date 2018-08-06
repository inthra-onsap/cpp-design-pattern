#include "buy_command.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

BuyCommand::BuyCommand(Stock *stock_) : AbstractCommand(stock_) {}

std::string BuyCommand::execute() {
  return stock->buy();
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern