cmake_minimum_required(VERSION 3.5)
project(HighEfficiencyAlgorithm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp mergesort.cpp ReverseIndex.cpp QuickSort_wsw.cpp BinarySearch.cpp)
add_executable(HighEfficiencyAlgorithm ${SOURCE_FILES})