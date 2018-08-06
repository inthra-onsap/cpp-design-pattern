#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_ORIGINATOR_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_ORIGINATOR_H_

#include "memento.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Originator {
 public:
  void setArticle(std::string newArticle);

  std::string getArticle();

  Memento *storeInMemento();

  std::string restoreFromMemento(Memento *memento);

 private:
  std::string article;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_ORIGINATOR_H_
