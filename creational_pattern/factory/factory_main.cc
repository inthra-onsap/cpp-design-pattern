#ifndef CPP_DESIGN_PATTERN_CREATIONAL_FACTORY_H_
#define CPP_DESIGN_PATTERN_CREATIONAL_FACTORY_H_

#include "shape_factory.h"
#include <cassert>

namespace cpp_design_pattern {
namespace creational_pattern {

class FactoryMain {
 public:
  void run() {
    ShapeFactory shapeFactory;

    shapeFactory.registerClass("circle", &Circle::getInstance);
    Circle *circle = (Circle *) shapeFactory.getInstance("circle");
    assert(circle->draw() == "Draw Circle");
    delete circle;

    shapeFactory.registerClass("square", &Square::getInstance);
    Square *square = (Square *) shapeFactory.getInstance("square");
    assert(square->draw() == "Draw Square");
    delete square;

    shapeFactory.registerClass("rectangle", &Rectangle::getInstance);
    Rectangle *rectangle = (Rectangle *) shapeFactory.getInstance("rectangle");
    assert(rectangle->draw() == "Draw Rectangle");
    delete rectangle;
  }
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif // CPP_DESIGN_PATTERN_CREATIONAL_FACTORY_H_