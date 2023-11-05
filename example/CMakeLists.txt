cmake_minimum_required(VERSION 3.24)

project(MyCppTemplateExample)

# dependencies
find_package(spdlog REQUIRED)

add_executable(${PROJECT_NAME}
        main.cpp
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        ok::MyCppTemplate
        spdlog::spdlog
)
