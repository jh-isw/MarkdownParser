cmake_minimum_required(VERSION 3.6)
project(Parser)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Parser.cpp Regexpression.h Regexpression.cpp InputString.h InputString.cpp Markdown.h Markdown.cpp)
add_executable(Parser ${SOURCE_FILES})