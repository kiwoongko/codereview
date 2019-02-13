cmake_minimum_required(VERSION 2.6)
project(TestProject1)

# SET C++ 11
set (CMAKE_CXX_STANDARD 11)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runUnitTests priority_queue_test.cc priority_queue.cc)
target_link_libraries(runUnitTests ${GTEST_LIBRARIES} pthread)

add_executable(runSolutionTests priority_queue_test_sol.cc priority_queue_sol.cc)
target_link_libraries(runSolutionTests ${GTEST_LIBRARIES} pthread)

# Main executable
add_executable(project1 main.cc priority_queue.cc)
