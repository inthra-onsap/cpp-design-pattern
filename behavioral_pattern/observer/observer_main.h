#ifndef CPP_DESIGN_PATTERN_OBSERVER_MAIN_H_
#define CPP_DESIGN_PATTERN_OBSERVER_MAIN_H_

#include "oil_price.h"
#include "price_subject.h"
#include "taxi_fare_observer.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class ObserverMain {
 public:
  void run() {
    OilPrice *oilPrice = new OilPrice(2.5);
    TaxiFareObserver *taxiFareObserver = new TaxiFareObserver();

    PriceSubject priceSubject;

    priceSubject.registerObserver(taxiFareObserver);
    priceSubject.notifyObservers(oilPrice);

    delete oilPrice;
  }

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_OBSERVER_MAIN_H_


