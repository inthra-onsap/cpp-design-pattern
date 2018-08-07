#include "has_pin.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

HasPin::HasPin(AbstractAtmMachine *atmMachine_) : atmMachine{atmMachine_} {}

std::string HasPin::hasCard() {
  return "you can't enter more than one card";
}

std::string HasPin::ejectCard() {
  atmMachine->setPinIncorrect();
  atmMachine->setNoCardState();

  return "card is ejected";
}

std::string HasPin::insertPin(int pinEntered) {
  return "you already entered pin";
}

std::string HasPin::requestCash(int amount) {

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

} //namespace behavioral_pattern
} //namespace cpp_design_pattern