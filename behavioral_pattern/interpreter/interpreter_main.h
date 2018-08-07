#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_INTERPRETER_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_INTERPRETER_MAIN_H_

#include "literal_expression.h"
#include "and_expression.h"

#include <cassert>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Interpreter {
 public:
  void run() {
    LiteralExpression *exp1 = new LiteralExpression("John");
    LiteralExpression *exp2 = new LiteralExpression("Married");
    AndExpression andExpression(exp1, exp2);

    assert(false == andExpression.interpret("John"));
    assert(false == andExpression.interpret("Unmarried"));
    assert(true == andExpression.interpret("John Married"));
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_INTERPRETER_MAIN_H_
