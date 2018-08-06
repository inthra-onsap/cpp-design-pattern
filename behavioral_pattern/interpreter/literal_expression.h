#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_LITERAL_EXPRESSION_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_LITERAL_EXPRESSION_H_

#include "abstract_expression.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class LiteralExpression : public AbstractExpression {
 public:
  LiteralExpression(std::string text_) : text{text_} {}

  virtual bool interpret(std::string query) {
    return (query.find(text) != std::string::npos);
  }

 private:
  std::string text;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_LITERAL_EXPRESSION_H_
