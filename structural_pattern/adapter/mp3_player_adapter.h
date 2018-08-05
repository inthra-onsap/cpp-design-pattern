#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_ADAPTER_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_ADAPTER_H_

#include "abstract_media_player.h"
#include "mp3_player.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class Mp3PlayerAdapter : public AbstractMediaPlayer {
 public:
  Mp3PlayerAdapter(Mp3Player *mp3Player_);

  ~Mp3PlayerAdapter();

  virtual std::string play();

 private:
  Mp3Player *mp3Player;

};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_MP3_PLAYER_ADAPTER_H_
