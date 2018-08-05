#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_ADAPTER_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_ADAPTER_H_

#include "abstract_media_player.h"
#include "mp4_player.h"

namespace cpp_design_pattern {
namespace structural_pattern {

class Mp4PlayerAdapter : public AbstractMediaPlayer {
 public:
  Mp4PlayerAdapter(Mp4Player *mp4Player_);

  ~Mp4PlayerAdapter();

  virtual std::string play();

 private:
  Mp4Player *mp4Player;
};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_MP4_PLAYER_ADAPTER_H_
