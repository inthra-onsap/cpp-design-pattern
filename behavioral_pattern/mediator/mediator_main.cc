#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_MEDIATOR_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_MEDIATOR_MAIN_H_

#include "chat_user.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class MediatorMain {
 public:
  void run() {
    ChatRoom *chatRoom = new ChatRoom();
    ChatUser *alice = new ChatUser(chatRoom);
    ChatUser *etran = new ChatUser(chatRoom);

    alice->sendMessage("Hi, Etran");
    etran->sendMessage("Hi, Alice");

  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_MEDIATOR_MAIN_H_