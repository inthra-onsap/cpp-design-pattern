#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_MAIN_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_MAIN_H_

#include "caretaker.h"
#include "originator.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

class MementoMain {
 public:
  void run() {
    Caretaker caretaker;
    Originator originator;

    int currArticleIdx = 0;

    originator.setArticle("This article1");
    caretaker.saveMemento(originator.storeInMemento());
    ++currArticleIdx;
    assert("This article1" == originator.getArticle());

    originator.setArticle("This article2");
    caretaker.saveMemento(originator.storeInMemento());
    ++currArticleIdx;
    assert("This article2" == originator.getArticle());


    originator.restoreFromMemento(caretaker.retrieveMemento(--currArticleIdx));
    assert("This article1" == originator.getArticle());
  }
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_MAIN_H_