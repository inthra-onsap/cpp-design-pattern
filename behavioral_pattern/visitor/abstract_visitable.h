#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITABLE_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITABLE_H_

#include "abstract_visitor.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractVisitable {
 public:
  virtual double accept(AbstractVisitor *visitor) = 0;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITABLE_H_
