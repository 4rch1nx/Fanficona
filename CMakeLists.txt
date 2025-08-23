cmake_minimum_required(VERSION 3.14)
project(Fanficona)

include(FetchContent)

set(TINY_ENGINE_NO_EXAMPLES ON CACHE BOOL "")

FetchContent_Declare(
    Tiny_engine
    GIT_REPOSITORY https://github.com/zen4xx/tiny_engine.git
    GIT_TAG        master
)

FetchContent_MakeAvailable(Tiny_engine)

add_executable(Fanficona main.cpp)

target_include_directories(Fanficona PRIVATE ${tiny_engine_SOURCE_DIR})

target_link_libraries(Fanficona PRIVATE Tiny_engine)
