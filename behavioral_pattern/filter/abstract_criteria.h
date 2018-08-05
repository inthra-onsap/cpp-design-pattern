#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACTCRITERIA_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACTCRITERIA_H_

#include "person.h"

#include <vector>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractCriteria {
 public:
  virtual std::vector<Person *> filter(std::vector<Person *> persons) = 0;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACTCRITERIA_H_
