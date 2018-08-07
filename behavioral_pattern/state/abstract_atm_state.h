#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_ATM_STATE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_ATM_STATE_H_

#include "abstract_atm_machine.h"

#include <string>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractAtmState {
 public:

  virtual std::string hasCard() = 0;

  virtual std::string ejectCard() = 0;

  virtual std::string insertPin(int pinEntered) = 0;

  virtual std::string requestCash(int amount) = 0;

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_ATM_STATE_H_
