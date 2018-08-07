#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_

#include "abstract_atm_state.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class HasCard : public AbstractAtmState {
 public:
  HasCard(AbstractAtmMachine *atmMachine_):atmMachine{atmMachine_}{}

  virtual std::string hasCard() {
    return "you can't enter more than one card";
  }

  virtual std::string ejectCard() {
    atmMachine->setPinIncorrect();
    atmMachine->setNoCardState();

    return "card is ejected";
  }

  virtual std::string insertPin(int pinEntered) {
    if (pinEntered == 1234) {
      atmMachine->setPinCorrect();
      atmMachine->setHasPinState();

      return "pin is correct";
    } else {
      atmMachine->setPinIncorrect();
      atmMachine->setNoCardState();

      return "pin is incorrect";
    }
  }

  virtual std::string requestCash(int amount) {
    return "please enter your pin";
  }

 private:
  AbstractAtmMachine *atmMachine;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_
