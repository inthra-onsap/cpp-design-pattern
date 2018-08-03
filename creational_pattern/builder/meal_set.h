#include "interface_item.h"

#ifndef CPP_DESIGN_PATTERN_BUILDER_MEALSET_H_
#define CPP_DESIGN_PATTERN_BUILDER_MEALSET_H_

#include <vector>

namespace cpp_design_pattern {
namespace creational_pattern {

class MealSet {
 public:
  ~MealSet();

  void addItem(InterfaceItem *item);

  std::string displayItems();

 private:
  std::vector<InterfaceItem *> items;
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BUILDER_MEALSET_H_
