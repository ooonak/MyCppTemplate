cmake_minimum_required(VERSION 3.22)

project(MyCppTemplateTests)

enable_testing()

add_executable(${PROJECT_NAME}
        PublicTests.cpp
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        ok::MyCppTemplate
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
