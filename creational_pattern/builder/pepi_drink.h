#ifndef CPP_DESIGN_PATTERN_BUILDER_PEPI_H
#define CPP_DESIGN_PATTERN_BUILDER_PEPI_H

#include "interface_item.h"

namespace cpp_design_pattern {
namespace creational_pattern {

class PepiDrink : public InterfaceItem {
 public:
  virtual std::string name();

  virtual float price();
};

} // namespace creational_pattern
} // namespace cpp_design_pattern



#endif //CPP_DESIGN_PATTERN_BUILDER_PEPI_H
