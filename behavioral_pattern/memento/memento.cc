#include "memento.h"

namespace cpp_design_pattern {
namespace behavioral_pattern {

Memento::Memento(std::string article_) : article{article_} {}

std::string Memento::getSavedArticle() {
  return article;
}

} //namespace behavioral_pattern
} //namespace cpp_design_pattern
