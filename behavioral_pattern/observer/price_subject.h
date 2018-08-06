#ifndef CPP_DESIGN_PATTERN_OBSERVER_PRICE_SUBJECT_H_
#define CPP_DESIGN_PATTERN_OBSERVER_PRICE_SUBJECT_H_

#include "abstract_subject.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class PriceSubject : public AbstractSubject {
 public:
  virtual void registerObserver(AbstractObserver *observer);

  virtual void unregisterObserver(AbstractObserver *observer);

  virtual void notifyObservers(AbstractImmutable *object);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_OBSERVER_PRICE_SUBJECT_H_
