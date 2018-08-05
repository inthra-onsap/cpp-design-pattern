#include "number.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Number::Number(int nOne_, int nTwo_, char ops_) : nOne{nOne_}, nTwo{nTwo_}, ops{ops_} {}

int Number::getNOne() {
  return nOne;
}

int Number::getNTwo() {
  return nTwo;
}

char Number::getOperator() {
  return ops;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern