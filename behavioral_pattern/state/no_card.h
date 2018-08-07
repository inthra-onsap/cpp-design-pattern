#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_NO_CARD_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_NO_CARD_H_

#include "abstract_atm_state.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class NoCard : public AbstractAtmState {
 public:
  NoCard(AbstractAtmMachine *atmMachine_) : atmMachine(atmMachine_) {}

  virtual std::string hasCard() {
    atmMachine->setHasCardState();

    return "please enter your pin";
  }

  virtual std::string ejectCard() {
    return "please insert card";
  }

  virtual std::string insertPin(int pinEntered) {
    return "please insert card";
  }

  virtual std::string requestCash(int amount) {
    return "please insert card";
  }

 private:
  AbstractAtmMachine *atmMachine;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_NO_CARD_H_
