#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_FILTER_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_FILTER_MAIN_H_

#include "person.h"
#include "and_criteria.h"
#include "female_criteria.h"
#include "married_criteria.h"

#include <vector>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class FilterMain {
 public:
  void run() {
    std::vector<Person *> persons;

    persons.push_back(new Person("A", 1, true));
    persons.push_back(new Person("B", 2, false));
    persons.push_back(new Person("C", 2, true));

    persons = AndCriteria(new FemaleCriteria(), new MarriedCriteria()).filter(persons);


    assert(1 == persons.size());
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_FILTER_MAIN_H_