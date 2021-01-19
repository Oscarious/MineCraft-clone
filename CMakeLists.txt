cmake_minimum_required(VERSION 3.16)
project(MineCraft VERSION 0.1 LANGUAGES CXX)

if (EXISTS ${CMAKE_BINARY_DIR}/conan_paths.cmake)
  include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
endif()

set (CMAKE_BUILD_TYPE Debug)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(STDC++FS "stdc++fs")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  set(STDC++FS "")
endif()

if (WIN32)
  include_directories(C:/include)
  link_directories(C:/lib)
endif(WIN32) 

set (SRC src/Main.cpp src/Display.cpp)
add_executable(MineCraft ${SRC})

find_package(glm REQUIRED)
find_package(glad REQUIRED)
find_package(glfw REQUIRED)
find_package(sfml REQUIRED)

target_link_libraries(MineCraft glad::glad glfw::glfw glm::glm sfml::sfml)