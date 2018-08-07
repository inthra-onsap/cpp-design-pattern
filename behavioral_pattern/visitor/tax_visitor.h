#ifndef CPP_DESIGN_PATTERN_TAX_VISITOR_H
#define CPP_DESIGN_PATTERN_TAX_VISITOR_H

#include "abstract_visitor.h"
#include "liquor.h"
#include "neccessity.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class TaxVisitor: public AbstractVisitor {
 public:
  virtual double visit(Liquor *liquorItem){
    return liquorItem->getPrice() * 0.25;
  }

  virtual double visit(Necessity *necessity){
    return necessity->getPrice() * 0.1;
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_TAX_VISITOR_H
