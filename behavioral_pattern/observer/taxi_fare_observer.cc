#include "taxi_fare_observer.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void TaxiFareObserver::update(AbstractImmutable *object) {
  std::cout << "Increase fare to " + std::to_string(object->getPrice());
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern