cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 2.0)

# add the executable
add_executable(Tutorial tutorial.cxx)

configure_file(TutorialConfig.h.in TutorialConfig.h)
target_include_directories(Tutorial PRIVATE ${PROJECT_BINARY_DIR})

# Debug prints
message("Binary dir is")
message(${CMAKE_CURRENT_BINARY_DIR})
message(${PROJECT_BINARY_DIR})