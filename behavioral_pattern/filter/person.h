#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_PERSON_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_PERSON_H_

#include <string>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Person {
 public:
  Person(std::string name_, int sex_, bool maritalStatus_);

  std::string getName();

  int getSex();

  bool isMarried();

 private:
  std::string name;
  int sex;
  bool maritalStatus;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_PERSON_H_
