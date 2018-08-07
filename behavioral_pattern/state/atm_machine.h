#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ATM_MACHINE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ATM_MACHINE_H_

#include "has_card.h"
#include "no_card.h"
#include "has_pin.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AtmMachine: AbstractAtmMachine {
 public:
  AtmMachine(float totalCash_) : totalCash{totalCash_}, isPinCorrect{false} {
    hasCard = new HasCard(this);
    hasPin = new HasPin(this);
    noCard = new NoCard(this);

    atmState = noCard;
  }

  std::string insertCard() {
    return atmState->hasCard();
  }

  std::string ejectCard() {
    return atmState->ejectCard();
  }

  std::string insertPin(int pinEntered) {
    return atmState->insertPin(pinEntered);
  }

  void addCash(int amount) {
    totalCash += amount;
  }

  void withdrawCash(int amount) {
    totalCash -= amount;
  }

  int viewTotalCash() {
    return totalCash;
  }

  std::string requestCash(int amount) {
    return atmState->requestCash(amount);
  }

  void setHasCardState() {
    atmState = hasCard;
  }

  void setNoCardState() {
    atmState = noCard;
  }

  void setHasPinState() {
    atmState = hasPin;
  }

  void setPinCorrect() {
    isPinCorrect = true;
  }

  void setPinIncorrect() {
    isPinCorrect = false;
  }

 private:
  AbstractAtmState *hasCard;
  AbstractAtmState *hasPin;
  AbstractAtmState *noCard;

  AbstractAtmState *atmState;
  float totalCash;
  bool isPinCorrect;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ATM_MACHINE_H_
