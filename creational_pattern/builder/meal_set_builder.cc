#include "meal_set_builder.h"

namespace cpp_design_pattern {
namespace creational_pattern {

MealSet *MealSetBuilder::orderFishBurgerSet() {
  MealSet *mealSet = new MealSet();

  mealSet->addItem(new FishBurger());
  mealSet->addItem(new PepiDrink());

  return mealSet;
}

MealSet *MealSetBuilder::orderBeefBurgerSet() {
  MealSet *mealSet = new MealSet();

  mealSet->addItem(new BeefBurger());
  mealSet->addItem(new PepiDrink());

  return mealSet;
}

} // namespace creational_pattern
} // namespace cpp_design_pattern