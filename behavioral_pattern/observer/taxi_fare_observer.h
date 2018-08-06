#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_TAXI_FARE_OBSERVER_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_TAXI_FARE_OBSERVER_H_

#include "abstract_observer.h"

#include <iostream>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class TaxiFareObserver : public AbstractObserver {
 public:
  virtual void update(AbstractImmutable *object);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_TAXI_FARE_OBSERVER_H_
