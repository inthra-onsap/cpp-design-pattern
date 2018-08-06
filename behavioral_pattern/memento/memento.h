#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_H_

#include<string>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Memento {
 public:
  Memento(std::string article_);

  std::string getSavedArticle();

 private:
  std::string article;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_MEMENTO_H_
