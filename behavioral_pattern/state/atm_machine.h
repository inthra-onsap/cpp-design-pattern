#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ATM_MACHINE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ATM_MACHINE_H_

#include "has_card.h"
#include "no_card.h"
#include "has_pin.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AtmMachine: AbstractAtmMachine {
 public:
  AtmMachine(float totalCash_);

  std::string insertCard();

  std::string ejectCard();

  std::string insertPin(int pinEntered);

  void addCash(int amount);

  std::string requestCash(int amount);

  virtual void withdrawCash(int amount);

  virtual int viewTotalCash();

  virtual void setHasCardState();

  virtual void setNoCardState();

  virtual void setHasPinState();

  virtual void setPinCorrect();

  void setPinIncorrect();

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
