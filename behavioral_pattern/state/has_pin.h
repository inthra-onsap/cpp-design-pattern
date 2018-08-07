#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_PIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_PIN_H_

#include "abstract_atm_state.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class HasPin : public AbstractAtmState {
 public:
  HasPin(AbstractAtmMachine *atmMachine_) : atmMachine{atmMachine_} {}

  virtual std::string hasCard() {
    return "you can't enter more than one card";
  }

  virtual std::string ejectCard() {
    atmMachine->setPinIncorrect();
    atmMachine->setNoCardState();

    return "card is ejected";
  }

  virtual std::string insertPin(int pinEntered) {
    return "you already entered pin";
  }

  virtual std::string requestCash(int amount) {

    if (amount > atmMachine->viewTotalCash()) {
      atmMachine->setPinIncorrect();
      atmMachine->setNoCardState();

      return "card is ejected";
    } else {
      atmMachine->withdrawCash(amount);

      if (atmMachine->viewTotalCash() == 0) {
        atmMachine->setPinIncorrect();
        atmMachine->setNoCardState();

        return "withdraw " + std::to_string(amount) + " success and eject card";
      }

      return "withdraw " + std::to_string(amount) + " success";
    }
  }

 private:
  AbstractAtmMachine *atmMachine;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_PIN_H_
