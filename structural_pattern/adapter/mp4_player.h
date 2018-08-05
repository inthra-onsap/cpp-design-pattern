#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_H_

#include <string>

namespace cpp_design_pattern {
namespace structural_pattern {

class Mp4Player {
 public:
  Mp4Player(std::string fileName_);

  std::string playMp4();

 private:
  std::string fileName;
};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_H_
