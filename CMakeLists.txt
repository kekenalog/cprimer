cmake_minimum_required(VERSION 3.8)
project(cprimer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES chapter01/main.cpp)

add_executable(cprimer ${SOURCE_FILES})

#add_library(target INTERFACE)
#target_sources(target INTERFACE ${my_header_list})
#target_include_directories(target INTERFACE ${CMAKE_SOURCE_DIR})

#add_library(target INTERFACE)
#set(CMAKE_CXX_STANDARD 11)
#
#set(SOURCE_FILES main.cpp)