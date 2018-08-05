#include "mp3_player.h"

namespace cpp_design_pattern {
namespace structural_pattern {

Mp3Player::Mp3Player(std::string fileName_) : fileName{fileName_} {}

std::string Mp3Player::playMp3() {
  return "playing " + fileName;
}

} // namespace structural_pattern
} // namespace cpp_design_pattern