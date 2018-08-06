#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_AND_EXPRESSION_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_AND_EXPRESSION_H_

#include "abstract_expression.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AndExpression : public AbstractExpression {
 public:
  AndExpression(AbstractExpression *exp1_, AbstractExpression *exp2_) : exp1{exp1_}, exp2{exp2_} {}

  ~AndExpression() {
    delete exp1;
    delete exp2;
  }

  virtual bool interpret(std::string query) {
    return (exp1->interpret(query) && exp2->interpret(query));
  }

 private:
  AbstractExpression *exp1;
  AbstractExpression *exp2;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_AND_EXPRESSION_H_
