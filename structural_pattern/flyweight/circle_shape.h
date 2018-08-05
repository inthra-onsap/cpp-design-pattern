#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_

#include "abstract_shape.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class CircleShape : public AbstractShape {
 public:
  CircleShape(std::string color_) : color{color_} {}

  void setXY(int x_, int y_) {
    x = x_;
    y = y_;
  }

  void setRadius(int radius_) {
    radius = radius_;
  }

  virtual void drawCircle() {
    std::cout << "drawing " << color << " circle at (" << x << ", " << y << ") with radius " << radius << std::endl;
  }

 private:
  std::string color;
  int x;
  int y;
  int radius;
};

} //namespace structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_CIRCLE_H_
