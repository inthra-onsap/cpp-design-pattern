#include "stock.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Stock::Stock() : quantity{100}, name{"NFX"} {}

std::string Stock::sell() {
  return "selling " + name + " amount " + std::to_string(quantity);
}

std::string Stock::buy() {
  return "buying " + name + " amount " + std::to_string(quantity);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern