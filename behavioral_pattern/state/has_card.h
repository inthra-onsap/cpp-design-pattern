#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_

#include "abstract_atm_state.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class HasCard : public AbstractAtmState {
 public:
  HasCard(AbstractAtmMachine *atmMachine_);

  virtual std::string hasCard();

  virtual std::string ejectCard();

  virtual std::string insertPin(int pinEntered);

  virtual std::string requestCash(int amount);

 private:
  AbstractAtmMachine *atmMachine;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_HAS_CARD_H_
