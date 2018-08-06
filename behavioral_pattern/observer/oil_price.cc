#include "oil_price.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

OilPrice::OilPrice(float price_) : price{price_} {}

float OilPrice::getPrice() {
  return price;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern