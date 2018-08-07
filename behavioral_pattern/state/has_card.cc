#include "has_card.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

HasCard::HasCard(AbstractAtmMachine *atmMachine_) : atmMachine{atmMachine_} {}

std::string HasCard::hasCard() {
  return "you can't enter more than one card";
}

std::string HasCard::ejectCard() {
  atmMachine->setPinIncorrect();
  atmMachine->setNoCardState();

  return "card is ejected";
}

std::string HasCard::insertPin(int pinEntered) {
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

std::string HasCard::requestCash(int amount) {
  return "please enter your pin";
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern
