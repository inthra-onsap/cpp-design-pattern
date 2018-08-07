#ifndef CPP_DESIGN_PATTERN_FOOTBALL_H
#define CPP_DESIGN_PATTERN_FOOTBALL_H

#include "abstract_sport.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Football : public AbstractSport {
 protected:
  virtual void initialize();

  virtual void start();

  virtual void end();

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_FOOTBALL_H
