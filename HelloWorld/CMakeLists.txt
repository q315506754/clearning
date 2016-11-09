cmake_minimum_required(VERSION 3.5)
project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.c commons/commons.h printer.c commons/not.h)
set(SOURCE_FILES main.c)
#set(SOURCE_FILES main.cpp)
add_executable(HelloWorld ${SOURCE_FILES})

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

