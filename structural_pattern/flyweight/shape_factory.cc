#include "shape_factory.h"

namespace cpp_design_pattern {
namespace structural_pattern {

ShapeFactory::~ShapeFactory() {
  for (auto it: objCache) {
    delete it.second;
  }
}

AbstractShape *ShapeFactory::getCircle(std::string color) {
  if (objCache.find(color) == objCache.end()) {
    std::cout << "Create new CircleShape object" << std::endl;
    objCache[color] = new CircleShape(color);
  }else{
    std::cout << "Reuse CircleShape object" << std::endl;
  }

  return objCache[color];
}

std::unordered_map<std::string, CircleShape *> ShapeFactory::objCache;

} //namespace structural_pattern
} //namespace cpp_design_pattern