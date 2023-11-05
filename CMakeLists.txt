cmake_minimum_required(VERSION 3.24)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "Do not build in-source!")
endif()

project(MyCppTemplate)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS OFF)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
option(BUILD_TESTING "Build tests" ON)
option(BUILD_EXAMPLES "Build examples" ON)
option(TRY_FETCH_CONTENT_AFTER_FIND_PACKAGE "If dependencies could not be found by find_package(), try FetchContent" ON)

if (TRY_FETCH_CONTENT_AFTER_FIND_PACKAGE)
    include(dependencies.cmake)
    EnableUseFetchContent()
endif()

add_subdirectory(src)

if(BUILD_EXAMPLES)
    add_subdirectory(example)
endif(BUILD_EXAMPLES)

if(BUILD_TESTING)
    include(CTest)
    add_subdirectory(tests)
endif(BUILD_TESTING)
