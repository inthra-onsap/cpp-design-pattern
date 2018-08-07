#ifndef CPP_DESIGN_PATTERN_STRUCTURAL_ADAPTER_H_
#define CPP_DESIGN_PATTERN_STRUCTURAL_ADAPTER_H_

#include "mp3_player_adapter.h"
#include "mp4_player_adapter.h"

#include <cassert>

namespace cpp_design_pattern {
namespace structural_pattern {

class AdapterMain {
 public:
  void run() {
    Mp3Player *mp3Player = new Mp3Player("audio.mp3");
    Mp4Player *mp4Player = new Mp4Player("video.mp4");

    Mp3PlayerAdapter *mp3PlayerAdapter = new Mp3PlayerAdapter(mp3Player);
    Mp4PlayerAdapter *mp4PlayerAdapter = new Mp4PlayerAdapter(mp4Player);

    assert("playing audio.mp3" == callHomogeneousPlayMethod(mp3PlayerAdapter));
    assert("playing video.mp4" == callHomogeneousPlayMethod(mp4PlayerAdapter));

    delete mp3PlayerAdapter;
    delete mp4PlayerAdapter;
  }

  std::string callHomogeneousPlayMethod(AbstractMediaPlayer *player){
    return player->play();
  }
};

} // namespace structural_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_STRUCTURAL_ADAPTER_H_