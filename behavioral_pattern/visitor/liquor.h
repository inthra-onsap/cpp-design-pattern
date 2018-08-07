#ifndef CPP_DESIGN_PATTERN_LIQUOR_H
#define CPP_DESIGN_PATTERN_LIQUOR_H

#include "abstract_visitable.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Liquor : public AbstractVisitable {
 public:
  Liquor(double price_);

  virtual double accept(AbstractVisitor *visitor);

  double getPrice();

 private:
  double price;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_LIQUOR_H
