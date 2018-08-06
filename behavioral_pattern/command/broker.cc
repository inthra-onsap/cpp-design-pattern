#include "broker.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Broker::~Broker() {
  for (auto it: commands) {
    delete it;
  }
}

void Broker::addTransaction(AbstractCommand *command) {
  commands.push_back(command);
}

void Broker::processTransaction() {
  for (auto it: commands) {
    std::cout << it->execute() << std::endl;
  }
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern