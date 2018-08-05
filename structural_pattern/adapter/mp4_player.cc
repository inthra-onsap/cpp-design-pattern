#include "mp4_player.h"

namespace cpp_design_pattern {
namespace structural_pattern {

Mp4Player::Mp4Player(std::string fileName_) : fileName{fileName_} {}

std::string Mp4Player::playMp4() {
  return "playing " + fileName;
}

} // namespace structural_pattern
} // namespace cpp_design_pattern