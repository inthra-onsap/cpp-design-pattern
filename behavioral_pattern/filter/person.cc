#include "person.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Person::Person(std::string name_, int sex_, bool maritalStatus_)
    : name{name_}, sex{sex_}, maritalStatus{maritalStatus_} {
}

std::string Person::getName() {
  return name;
}

int Person::getSex() {
  return sex;
}

bool Person::isMarried() {
  return maritalStatus;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern