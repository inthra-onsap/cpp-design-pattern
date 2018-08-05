#include "mp3_player_adapter.h"

namespace cpp_design_pattern {
namespace structural_pattern {

Mp3PlayerAdapter::Mp3PlayerAdapter(Mp3Player *mp3Player_) : mp3Player{mp3Player_} {}

Mp3PlayerAdapter::~Mp3PlayerAdapter() {
  delete mp3Player;
}

std::string Mp3PlayerAdapter::play() {
  return mp3Player->playMp3();
}

} // namespace structural_pattern
} // namespace cpp_design_pattern