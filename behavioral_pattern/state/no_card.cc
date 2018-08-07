#include "no_card.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

NoCard::NoCard(AbstractAtmMachine *atmMachine_) : atmMachine(atmMachine_) {}

std::string NoCard::hasCard() {
  atmMachine->setHasCardState();

  return "please enter your pin";
}

std::string NoCard::ejectCard() {
  return "please insert card";
}

std::string NoCard::insertPin(int pinEntered) {
  return "please insert card";
}

std::string NoCard::requestCash(int amount) {
  return "please insert card";
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern