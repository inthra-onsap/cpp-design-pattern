#include "caretaker.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Caretaker::~Caretaker() {
  for (auto article: articles) {
    delete article;
  }
}

void Caretaker::saveMemento(Memento *memento) {
  articles.push_back(memento);

}

Memento *Caretaker::retrieveMemento(int idx) {
  return articles[idx - 1];
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern