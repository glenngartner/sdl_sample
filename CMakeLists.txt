cmake_minimum_required(VERSION 3.8)
project(sdl_sample)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/SDL2-2.0.7/x86_64-w64-mingw32/include)

link_directories(${PROJECT_SOURCE_DIR}/SDL2-2.0.7/x86_64-w64-mingw32/lib)

set(SOURCE_FILES main.cpp)
add_executable(sdl_sample ${SOURCE_FILES})
target_link_libraries(sdl_sample libSDL2.a)
