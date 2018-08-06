#ifndef CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_SUBJECT_H_
#define CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_SUBJECT_H_

#include "abstract_observer.h"
#include "abstract_immutable.h"

#include <vector>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractSubject {
 public:
  ~AbstractSubject(){
    for (auto it: observers) {
      delete it;
    }
  }

  virtual void registerObserver(AbstractObserver *observer) = 0;

  virtual void unregisterObserver(AbstractObserver *observer) = 0;

  virtual void notifyObservers(AbstractImmutable *object) = 0;

 protected:
  std::vector<AbstractObserver *> observers;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_OBSERVER_ABSTRACT_SUBJECT_H_
