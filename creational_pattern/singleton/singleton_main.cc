#ifndef CPP_DESIGN_PATTERN_CREATIONAL_SINGLETON_H_
#define CPP_DESIGN_PATTERN_CREATIONAL_SINGLETON_H_

#include "singleton.h"

#include <cassert>
#include <sstream>
#include <iostream>

namespace cpp_design_pattern {
namespace creational_pattern {

class SingletonMain {
 public:
  void run() {

    std::ostringstream out;
    Singleton *single1 = Singleton::getInstance();
    Singleton *single2 = Singleton::getInstance();

    assert(single1 == single2);

    out << single1;
    std::string singleAddr1 = out.str();
    out.str("");
    out.clear();

    out << single2;
    std::string singleAddr2 = out.str();

    assert(singleAddr1 == singleAddr2);
  }
};

} // namespace creational_pattern
} // namespace cpp_design_pattern

#endif //CPP_DESIGN_PATTERN_CREATIONAL_SINGLETON_H_