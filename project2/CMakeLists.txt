cmake_minimum_required(VERSION 2.6)
project(TestProject2)

# SET C++ 11
set (CMAKE_CXX_STANDARD 11)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runUnitTests shopping_test.cc shopping.cc goods.cc)
target_link_libraries(runUnitTests ${GTEST_LIBRARIES} pthread)

add_executable(runSolutionTests unit_test_main.cc goods_test_sol.cc shopping_basket_test_sol.cc shopping_basket_sol.cc goods_sol.cc)
target_link_libraries(runSolutionTests ${GTEST_LIBRARIES} pthread)

add_executable(project2 main.cc shopping.cc goods.cc)

