cmake_minimum_required(VERSION 3.20)

project(CSC1300)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

foreach(SOURCE ${SOURCES})
    get_filename_component(EXE_NAME "${SOURCE}" NAME_WE)

    add_executable(${EXE_NAME} ${SOURCE})
endforeach()
