#ifndef CPP_DESIGN_PATTERN_ABSTRACT_ATM_MACHINE_H
#define CPP_DESIGN_PATTERN_ABSTRACT_ATM_MACHINE_H

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractAtmMachine {
  // Forward declaration
 public:
  virtual void setHasCardState() = 0;
  virtual void setNoCardState() = 0;
  virtual void setHasPinState()= 0;
  virtual void setPinCorrect() = 0;
  virtual void setPinIncorrect() = 0;
  virtual int viewTotalCash() = 0;
  virtual void withdrawCash(int) = 0;

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_ABSTRACT_ATM_MACHINE_H
