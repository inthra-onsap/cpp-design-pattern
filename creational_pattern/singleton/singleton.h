#ifndef CPP_DESIGN_PATTERN_SINGLETON_H_
#define CPP_DESIGN_PATTERN_SINGLETON_H_

#include <string>

namespace cpp_design_pattern {
namespace creational_pattern {

class Singleton {
 public:
  static Singleton *getInstance();

 private:
  static Singleton *instance;
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_SINGLETON_H_
