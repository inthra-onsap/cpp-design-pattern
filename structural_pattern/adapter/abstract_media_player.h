#ifndef CPP_DESIGN_PATTERN_ADAPTER_ABSTRACT_MEDIA_PLAYER_H_
#define CPP_DESIGN_PATTERN_ADAPTER_ABSTRACT_MEDIA_PLAYER_H_

#include <string>

namespace cpp_design_pattern {
namespace structural_pattern {

class AbstractMediaPlayer {
 public:
  virtual std::string play() = 0;
};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_ADAPTER_ABSTRACT_MEDIA_PLAYER_H_
