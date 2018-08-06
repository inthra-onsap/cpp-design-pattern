#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_EXPRESSION_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_EXPRESSION_H_

#include <string>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractExpression {
 public:
  virtual bool interpret(std::string query) = 0;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_EXPRESSION_H_
