#include "abstract_sport.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void AbstractSport::play() {
  initialize();
  start();
  end();
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern
