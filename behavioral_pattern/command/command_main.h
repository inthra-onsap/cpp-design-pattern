#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_COMMAND_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_COMMAND_MAIN_H_

#include "broker.h"
#include "stock.h"
#include "sell_command.h"
#include "buy_command.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class CommandMain {
 public:
  void run() {
    Broker broker;
    Stock *stock = new Stock();
    SellCommand *sellCommand = new SellCommand(stock);
    BuyCommand *buyCommand = new BuyCommand(stock);

    broker.addTransaction(sellCommand);
    broker.addTransaction(buyCommand);

    broker.processTransaction();

    delete stock;
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_COMMAND_MAIN_H_