#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_H_

#include <string>

namespace cpp_design_pattern {
namespace structural_pattern {

class Mp3Player {
 public:
  Mp3Player(std::string fileName_);

  std::string playMp3();

 private:
  std::string fileName;
};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_H_
