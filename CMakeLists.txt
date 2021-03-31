cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 2.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the MathFunctions library
add_subdirectory(MathFunctions)

# add the executable
add_executable(Tutorial tutorial.cxx)

target_link_libraries(Tutorial PRIVATE
    MathFunctions
)

configure_file(TutorialConfig.h.in TutorialConfig.h)
target_include_directories(Tutorial PRIVATE 
    ${PROJECT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}/MathFunctions)

# Debug prints
message("Binary dir is")
message(${CMAKE_CURRENT_BINARY_DIR})
message(${CMAKE_BINARY_DIR})
message(${PROJECT_BINARY_DIR})
message("Source dir is")
message(${PROJECT_SOURCE_DIR})
message(${CMAKE_SOURCE_DIR})