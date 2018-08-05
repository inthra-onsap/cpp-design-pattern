#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_BRIDGE_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_BRIDGE_H_

#include "circle.h"
#include "pencil.h"
#include "paintbrush.h"

#include <cassert>

namespace cpp_design_pattern {
namespace structural_pattern {

class BridgeMain {
 public:
  void run() {
    AbstractShape defaultShape(new Pencil());
    Circle circleShape(new PaintBrush());

    assert("draw default shape by pencil" == defaultShape.draw());
    assert("draw circle shape by paintbrush" == circleShape.draw());
  }
};

} // structural_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_BRIDGE_H_