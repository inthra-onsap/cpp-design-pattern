#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITOR_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITOR_H_

namespace cpp_design_pattern {
namespace behavioral_pattern {

class AbstractVisitor {
 public:
  virtual double visit(class Liquor *liquorItem) = 0;

  virtual double visit(class Necessity *necessity) = 0;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ABSTRACT_VISITOR_H_
