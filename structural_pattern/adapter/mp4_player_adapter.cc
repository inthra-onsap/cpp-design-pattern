#include "mp4_player_adapter.h"

namespace cpp_design_pattern {
namespace structural_pattern {

Mp4PlayerAdapter::Mp4PlayerAdapter(Mp4Player *mp4Player_) : mp4Player{mp4Player_} {}

Mp4PlayerAdapter::~Mp4PlayerAdapter() {
  delete mp4Player;
}

std::string Mp4PlayerAdapter::play() {
  return mp4Player->playMp4();
}

} //namespace structural_pattern
} //cpp_design_pattern