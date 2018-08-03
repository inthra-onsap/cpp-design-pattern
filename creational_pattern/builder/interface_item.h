#ifndef CPP_DESIGN_PATTERN_BUILDER_ITEM_H_
#define CPP_DESIGN_PATTERN_BUILDER_ITEM_H_

#include <string>

namespace cpp_design_pattern {
namespace creational_pattern {

class InterfaceItem {
 public:
  virtual std::string name() = 0;
  virtual float price() = 0;
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BUILDER_ITEM_H_
