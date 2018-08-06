#ifndef CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_OBSERVER_H_
#define CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_OBSERVER_H_

#include "abstract_immutable.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractObserver {
 public:
  virtual void update(AbstractImmutable *object) = 0;

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_OBSERVER_H_
