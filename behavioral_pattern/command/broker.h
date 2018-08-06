#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_BROKER_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_BROKER_H_

#include "abstract_command.h"

#include<vector>
#include<iostream>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Broker {
 public:
  ~Broker();

  void addTransaction(AbstractCommand *command);

  void processTransaction();

 private:
  std::vector<AbstractCommand *> commands;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_BROKER_H_
