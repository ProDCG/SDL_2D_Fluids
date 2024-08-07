cmake_minimum_required(VERSION 3.27)
project(sdl_2D_fluids C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "C:/Libraries/SDL2-2.30.6/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(sdl_2D_fluids main.c
        src/sph.c
        src/sph.c
        src/renderer.c
        src/particle.c
        src/camera.c)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})