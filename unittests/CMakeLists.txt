cmake_minimum_required(VERSION 3.4)
project(yogensha.unittests)

set(SOURCES
    assert_unittest.cpp
    integral_constant_unittest.cpp
    list_unittest.cpp
)

add_library(all_unittests ${SOURCES})

set_property(TARGET all_unittests PROPERTY CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR})
