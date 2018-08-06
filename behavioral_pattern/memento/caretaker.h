#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_CARETAKER_H_
#define CPP_DESIGN_PATTERN_BEHAVIORAL_CARETAKER_H_

#include "memento.h"

#include <vector>

namespace cpp_design_pattern {
namespace behavioral_pattern {

class Caretaker {
 public:
  ~Caretaker();

  void saveMemento(Memento *memento);

  Memento *retrieveMemento(int idx);

 private:
  std::vector<Memento *> articles;
};

} //namespace behavioral_pattern
} //namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_BEHAVIORAL_CARETAKER_H_
