#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_PENCIL_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_PENCIL_H_

#include "abstract_stationary.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class Pencil : public AbstractStationary {
 public:
  virtual std::string name();

};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_PENCIL_H_
