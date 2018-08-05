#include "female_criteria.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

std::vector<Person *> FemaleCriteria::filter(std::vector<Person *> persons) {
  std::vector<Person *> tmp;

  for (auto person: persons) {
    if (person->getSex() == 2) {
      tmp.push_back(person);
    }
  }

  return tmp;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern