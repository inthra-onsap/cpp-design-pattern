#ifndef CPP_DESIGN_PATTERN_MARRIED_CRITERIA_H
#define CPP_DESIGN_PATTERN_MARRIED_CRITERIA_H

#include "abstract_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class MarriedCriteria : public AbstractCriteria {
 public:
  virtual std::vector<Person *> filter(std::vector<Person *> persons);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_MARRIED_CRITERIA_H
