cmake_minimum_required(VERSION 3.24)
project(ScrabbleTesting)

set(CMAKE_CXX_STANDARD 17)

add_executable(ScrabbleTesting main.cpp LetterInfo.cpp LetterInfo.h Words.cpp Words.h)
