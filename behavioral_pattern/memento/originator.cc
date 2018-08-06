#include "originator.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

void Originator::setArticle(std::string newArticle) {
  article = newArticle;
}

std::string Originator::getArticle() {
  return article;
}

Memento *Originator::storeInMemento() {
  return new Memento(article);
}

std::string Originator::restoreFromMemento(Memento *memento) {
  article = memento->getSavedArticle();
  return article;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern
