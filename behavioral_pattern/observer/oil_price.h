#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_OIL_PRICE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_OIL_PRICE_H_

#include "abstract_immutable.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class OilPrice: public AbstractImmutable {
 public:
  OilPrice(float price_);

  virtual float getPrice();

 private:
  float price;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_OIL_PRICE_H_
