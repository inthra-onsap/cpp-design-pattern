#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_NECESSITY_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_NECESSITY_H_

#include "abstract_visitable.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Necessity : public AbstractVisitable {
 public:
  Necessity(double price_);

  virtual double accept(AbstractVisitor *visitor);

  double getPrice();

 private:
  double price;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_NECESSITY_H_
