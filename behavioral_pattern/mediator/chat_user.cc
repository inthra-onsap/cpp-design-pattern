#include "chat_user.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

ChatUser::ChatUser(ChatRoom *chatRoom_) : chatRoom{chatRoom_} {}

void ChatUser::sendMessage(std::string msg) {
  chatRoom->showMessage(msg);
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern