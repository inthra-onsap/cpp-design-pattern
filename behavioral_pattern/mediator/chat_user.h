#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_CHAT_USER_H
#define CPP_DESIGN_PATTERN_BEHAVIORAL_CHAT_USER_H

#include "chat_room.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class ChatUser {
 public:
  ChatUser(ChatRoom *chatRoom_);

  void sendMessage(std::string msg);

 private:
  ChatRoom *chatRoom;

};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_CHAT_USER_H
