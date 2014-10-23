cmake_minimum_required(VERSION 2.8)
project(imap_experiment CXX C)

# Use C++11
set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++11")
set(cpp11flag "-std=c++11")

# Sources

# Libraries

# Boost
set(boost_libs system regex thread)
find_package(Boost COMPONENTS ${boost_libs} REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# Set some compiler flags
set(error_flags "-Wall -Wextra -Weffc++ -Wunreachable-code -Werror -pedantic")
set(paranoid_error_flags "-Werror -Weverything -pedantic")
set(disabled_error_flags "-Wno-c++98-compat")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${cpp11flag} ${paranoid_error_flags} ${disabled_error_flags} -g ")

# Executables
add_executable(imap main.cpp)
target_link_libraries(imap ${Boost_SYSTEM_LIBRARY})