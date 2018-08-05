#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_AND_CRITERIA_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_AND_CRITERIA_H_

#include "abstract_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AndCriteria : public AbstractCriteria {
 public:
  AndCriteria(AbstractCriteria *criteriaLhs_, AbstractCriteria *criteriaRhs_);

  ~AndCriteria();

  virtual std::vector<Person *> filter(std::vector<Person *> persons);

 private:
  AbstractCriteria *criteriaLhs;
  AbstractCriteria *criteriaRhs;

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_AND_CRITERIA_H_
