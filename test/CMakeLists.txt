# Add the src directory so the test executable can find stuff
include_directories(${PROJECT_SOURCE_DIR}/src)

# Turn off a warning triggered by Catch:
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-exit-time-destructors")

file(GLOB testfiles "*.cpp")
add_executable(tester ${testfiles})

target_link_libraries(tester libaeimap)