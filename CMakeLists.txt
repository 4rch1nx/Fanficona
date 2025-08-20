cmake_minimum_required(VERSION 3.14)
project(Fanficona)

include(FetchContent)

FetchContent_Declare(
    tiny_engine
    GIT_REPOSITORy https://github.com/zen4xx/tiny_engine.git
    GIT_TAG        main
)

FetchContent_MakeAvailable(tiny_engine)

add_executable(Fanficona main.cpp)

target_link_libraries(Fanficona PRIVATE tiny_engine)

target_include_directories(Fanficona PRIVATE ${tiny_engine_SOURCE_DIR}/include)