#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_FLYWEIGHT_MAIN_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_FLYWEIGHT_MAIN_H_

#include "shape_factory.h"

#include <vector>

namespace cpp_design_pattern {
namespace structural_pattern {

class FlyWeightMain {
 public:
  void run() {
    std::vector<std::string> colors{"red", "green", "blue"};
    ShapeFactory shapeFactory;

    CircleShape *circle;

    for (int i = 0; i < 10000; ++i) {
      circle = (CircleShape *)shapeFactory.getCircle(colors[rand() % 3]);
      circle->setXY(rand(), rand());
      circle->setRadius(rand());

      circle->drawCircle();
    }

  }

};

} //namespace structural_pattern
} //namespace cpp_design_pattern


#endif //CPP_DESIGN_PATTERN_STRUCTURAL_FLYWEIGHT_MAIN_H_
