#include "and_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

AndCriteria::AndCriteria(AbstractCriteria *criteriaLhs_, AbstractCriteria *criteriaRhs_) {
  criteriaLhs = criteriaLhs_;
  criteriaRhs = criteriaRhs_;
}

AndCriteria::~AndCriteria() {
  delete criteriaLhs;
  delete criteriaRhs;
}

std::vector<Person *> AndCriteria::filter(std::vector<Person *> persons) {
  std::vector<Person *> tmp = criteriaLhs->filter(persons);
  return criteriaRhs->filter(tmp);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern


