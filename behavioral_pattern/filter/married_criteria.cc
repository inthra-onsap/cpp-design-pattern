#include "married_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

std::vector<Person *> MarriedCriteria::filter(std::vector<Person *> persons) {
  std::vector<Person *> tmp;

  for (auto person: persons) {
    if (person->isMarried()) {
      tmp.push_back(person);
    }
  }

  return tmp;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern