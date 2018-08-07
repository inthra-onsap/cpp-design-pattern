#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_STATE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_STATE_H_

#include "atm_machine.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class StateMain {
 public:
  void run() {
    AtmMachine *atmMachine = new AtmMachine(10000);

    assert("please enter your pin" == atmMachine->insertCard());
    assert("pin is correct" == atmMachine->insertPin(1234));
    assert("withdraw 1000 success" == atmMachine->requestCash(1000));
    assert("card is ejected" == atmMachine->ejectCard());

    delete atmMachine;
  }

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern


#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_STATE_H_
