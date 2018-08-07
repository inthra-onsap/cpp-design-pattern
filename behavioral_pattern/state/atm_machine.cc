#include "atm_machine.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

AtmMachine::AtmMachine(float totalCash_) : totalCash{totalCash_}, isPinCorrect{false} {
  hasCard = new HasCard(this);
  hasPin = new HasPin(this);
  noCard = new NoCard(this);

  atmState = noCard;
}

std::string AtmMachine::insertCard() {
  return atmState->hasCard();
}

std::string AtmMachine::ejectCard() {
  return atmState->ejectCard();
}

std::string AtmMachine::insertPin(int pinEntered) {
  return atmState->insertPin(pinEntered);
}

void AtmMachine::addCash(int amount) {
  totalCash += amount;
}

void AtmMachine::withdrawCash(int amount) {
  totalCash -= amount;
}

int AtmMachine::viewTotalCash() {
  return totalCash;
}

std::string AtmMachine::requestCash(int amount) {
  return atmState->requestCash(amount);
}

void AtmMachine::setHasCardState() {
  atmState = hasCard;
}

void AtmMachine::setNoCardState() {
  atmState = noCard;
}

void AtmMachine::setHasPinState() {
  atmState = hasPin;
}

void AtmMachine::setPinCorrect() {
  isPinCorrect = true;
}

void AtmMachine::setPinIncorrect() {
  isPinCorrect = false;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern