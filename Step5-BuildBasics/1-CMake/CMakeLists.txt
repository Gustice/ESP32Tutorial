cmake_minimum_required(VERSION 3.6)
project(DemoBuild)   

add_subdirectory(dynLib)
add_subdirectory(statLib)

add_executable(App app/main.cpp app/process.cpp)
target_link_libraries(App dynLibrary statLibrary)
target_include_directories(App PUBLIC dynLib statLib)
