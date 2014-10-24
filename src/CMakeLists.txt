# Thread library
find_package(Threads REQUIRED)

# Boost
set(boost_libs system regex thread)
find_package(Boost COMPONENTS ${boost_libs} REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# Roll up all cpp files except main into a library.
add_library(libaeimap blah.cpp)

# Link libraries in here so they don't have to be linked as well by tests.
target_link_libraries(libaeimap ${CMAKE_THREAD_LIBS_INIT} ${Boost_SYSTEM_LIBRARY})

add_executable(imap main.cpp)
target_link_libraries(imap libaeimap)