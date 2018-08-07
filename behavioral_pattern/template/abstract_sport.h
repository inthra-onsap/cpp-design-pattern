#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_SPORT_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_SPORT_H_

#include <iostream>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractSport {
 public:
  void play();

 protected:

  virtual void initialize() = 0;

  virtual void start() = 0;

  virtual void end() = 0;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_SPORT_H_
