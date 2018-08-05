#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSHAPE_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSHAPE_H_

#include "abstract_stationary.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractShape {
 public:
  AbstractShape(AbstractStationary *stationary_);

  virtual std::string draw();

 protected:
  AbstractStationary *stationary;
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSHAPE_H_
