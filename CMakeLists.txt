cmake_minimum_required(VERSION 3.15)

project(mdspan_test CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("vendor/mdspan/" "mdspan" EXCLUDE_FROM_ALL)

add_executable(mdspan_test mdspan_test.cpp)

target_link_libraries(mdspan_test PUBLIC std::mdspan)
