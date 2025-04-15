cmake_minimum_required(VERSION 3.5)
project(flextest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(flextest main.cpp testblock.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
