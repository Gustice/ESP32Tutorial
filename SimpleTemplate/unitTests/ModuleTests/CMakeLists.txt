cmake_minimum_required(VERSION 3.0)
project(ModuleTests)

# DUT 
get_filename_component(COMPONENTS_DIR ../../components ABSOLUTE)

# The test Runner
include_directories(include)
include_directories(tests)

add_library(DutSource STATIC 
    ${COMPONENTS_DIR}/CModule/cModule.c
    ${COMPONENTS_DIR}/CppModule/cppModule.cpp
    )
    target_include_directories(DutSource PUBLIC 
    ${COMPONENTS_DIR}/CModule/include
    ${COMPONENTS_DIR}/CppModule/include
    )

add_executable(TestRunner TestMain.cpp tests/cPart.cpp tests/cppPart.cpp)
target_link_libraries(TestRunner DutSource)
target_include_directories(TestRunner PUBLIC include 
    ${COMPONENTS_DIR}/CModule/include
    ${COMPONENTS_DIR}/CppModule/include
    )
