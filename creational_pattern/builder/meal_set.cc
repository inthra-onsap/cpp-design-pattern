#include "meal_set.h"

namespace cpp_design_pattern {
namespace creational_pattern {

MealSet::~MealSet(){
  for(auto item: items){
    delete item;
  }
}

void MealSet::addItem(InterfaceItem *item) {
  items.push_back(item);
}

std::string MealSet::displayItems() {
  std::string display{""};

  for(auto item: items){
    display += item->name() + " : " + std::to_string(item->price()) + "\n";
  }

  return display;
}

} // namespace creational_pattern
} // namespace cpp_design_pattern