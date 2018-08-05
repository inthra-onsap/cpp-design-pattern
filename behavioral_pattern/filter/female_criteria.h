#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_FEMALE_CRITERIA_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_FEMALE_CRITERIA_H_

#include "abstract_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class FemaleCriteria : public AbstractCriteria {
 public:
  virtual std::vector<Person *> filter(std::vector<Person *> persons);
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_FEMALE_CRITERIA_H_
