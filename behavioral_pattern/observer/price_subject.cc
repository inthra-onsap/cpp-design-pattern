#include "price_subject.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void PriceSubject::registerObserver(AbstractObserver *observer) {
  observers.push_back(observer);
}

void PriceSubject::unregisterObserver(AbstractObserver *observer) {
  for (auto it: observers) {
    if (observer == it) {
      delete it;
      break;
    }
  }
}

void PriceSubject::notifyObservers(AbstractImmutable *object) {
  for (auto it: observers) {
    it->update(object);
  }
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern