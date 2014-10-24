# Add the src directory so the test executable can find stuff
include_directories(${PROJECT_SOURCE_DIR}/src)

# Turn off a warning triggered by Catch:
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-exit-time-destructors")

file(GLOB unit_tester_files "*.cpp")
add_executable(unit_tester ${unit_tester_files})

target_link_libraries(unit_tester aeimap)