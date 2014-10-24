cmake_minimum_required(VERSION 2.8)
project(imap_experiment CXX C)

# Use C++11
set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++11")
set(cpp11flag "-std=c++11")
# Set some compiler flags
set(error_flags "-Wall -Wextra -Weffc++ -Wunreachable-code -Werror -pedantic")
set(paranoid_error_flags "-Werror -Weverything -pedantic")
set(disabled_error_flags "-Wno-c++98-compat")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${cpp11flag} ${paranoid_error_flags} ${disabled_error_flags} -g ")

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

