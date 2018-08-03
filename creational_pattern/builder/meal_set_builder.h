#ifndef CPP_DESIGN_PATTERN_BUILDER_MEALSETBUILDER_H_
#define CPP_DESIGN_PATTERN_BUILDER_MEALSETBUILDER_H_

#include "meal_set.h"
#include "beef_burger.h"
#include "fish_burger.h"
#include "pepi_drink.h"

namespace cpp_design_pattern {
namespace creational_pattern {

class MealSetBuilder {
 public:
  MealSet *orderFishBurgerSet();

  MealSet *orderBeefBurgerSet();

};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BUILDER_MEALSETBUILDER_H_
