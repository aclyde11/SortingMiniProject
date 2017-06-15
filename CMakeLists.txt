cmake_minimum_required(VERSION 3.7)

project(SortingMiniProject)


set(CMAKE_CXX_STANDARD 11)

include_directories(include/)
include_directories(src/)


file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*cpp")

add_executable(SortingMiniProject ${SOURCES} ${HEADERS})