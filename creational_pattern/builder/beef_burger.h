#ifndef CPP_DESIGN_PATTERN_BUILDER_BEEF_BURGER_H_
#define CPP_DESIGN_PATTERN_BUILDER_BEEF_BURGER_H_

#include "interface_item.h"

namespace cpp_design_pattern {
namespace creational_pattern {
class BeefBurger : public InterfaceItem {
 public:
  virtual std::string name();

  virtual float price();
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BUILDER_BEEF_BURGER_H_
