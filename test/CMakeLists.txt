# Add the src directory so the test executable can find stuff
include_directories(${PROJECT_SOURCE_DIR}/src)

# Make a loop of this.
add_executable(tester tester.cpp)
target_link_libraries(tester libaeimap)
add_test(NAME MyTest COMMAND tester)