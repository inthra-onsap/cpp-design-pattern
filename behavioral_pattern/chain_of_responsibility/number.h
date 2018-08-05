#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_NUMBER_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_NUMBER_H_

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Number {
 public:
  Number(int nOne_, int nTwo_, char ops_);

  int getNOne();

  int getNTwo();

  char getOperator();

 private:
  int nOne;
  int nTwo;
  char ops;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_NUMBER_H_
