cmake_minimum_required(VERSION 3.10)
project(CPP_Design_Pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP_Design_Pattern main.cc creational_pattern/factory/factory_main.cc creational_pattern/factory/interface_shape.cc creational_pattern/factory/circle.cc creational_pattern/factory/square.cc creational_pattern/factory/rectangle.cc creational_pattern/factory/shape_factory.cc creational_pattern/factory/interface_shape.h creational_pattern/factory/circle.h creational_pattern/factory/rectangle.h creational_pattern/factory/square.h creational_pattern/factory/shape_factory.h)