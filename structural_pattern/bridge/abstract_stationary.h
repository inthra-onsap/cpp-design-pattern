#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSTATIONARY_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSTATIONARY_H_

#include <string>

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractStationary {
 public:
  virtual std::string name() = 0;
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_ABSTRACTSTATIONARY_H_
