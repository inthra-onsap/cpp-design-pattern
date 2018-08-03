#include "singleton.h"

namespace cpp_design_pattern {
namespace creational_pattern {

Singleton* Singleton::instance = NULL;

Singleton *Singleton::getInstance() {
  if (!instance) {
    instance = new Singleton();
  }

  return instance;
}

} // namespace creational_pattern
} // namespace cpp_design_pattern