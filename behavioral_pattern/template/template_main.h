#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_TEMPLATE_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_TEMPLATE_MAIN_H_

#include "football.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class TemplateMain {
 public:
  void run() {
    Football football;

    football.play();

  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_TEMPLATE_MAIN_H_
