#include "meal_set_builder.h"

#include <iostream>
#include <cassert>

namespace cpp_design_pattern {
namespace creational_pattern {

class BuilderMain {
 public:
  void run() {
    MealSetBuilder mealSetBuilder;

    MealSet *mealSet = mealSetBuilder.orderBeefBurgerSet();
    std::string orders = mealSet->displayItems();
    assert(orders.find("Beef Burger : 2.5") != std::string::npos);
    assert(orders.find("Pesi Drink : 1.5") != std::string::npos);
    delete mealSet;

    mealSet = mealSetBuilder.orderFishBurgerSet();
    orders = mealSet->displayItems();
    assert(orders.find("Fish Burger : 3.5") != std::string::npos);
    assert(orders.find("Pesi Drink : 1.5") != std::string::npos);
    delete mealSet;

  }
};

} // namespace creational_pattern
} // namespae cpp_design_pattern