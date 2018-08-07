#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_VISITOR_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_VISITOR_MAIN_H_

#include "tax_visitor.h"
#include "neccessity.h"
#include "liquor.h"

#include <cassert>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class VisitorMain {
 public:
  void run() {
    Necessity *necessity = new Necessity(50.0);
    Liquor *liquor = new Liquor(60.0);
    TaxVisitor *taxVisitor = new TaxVisitor();

    assert(5 == necessity->accept(taxVisitor));
    assert(15 == liquor->accept(taxVisitor));

    delete necessity;
    delete liquor;
    delete taxVisitor;
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_VISITOR_MAIN_H_
