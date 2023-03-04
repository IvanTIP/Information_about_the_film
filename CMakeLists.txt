cmake_minimum_required(VERSION 3.20)
project(InfFilm)

set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(InfFilm main.cpp)

target_link_libraries(InfFilm PRIVATE nlohmann_json::nlohmann_json)