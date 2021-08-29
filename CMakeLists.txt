cmake_minimum_required(VERSION 3.15)

project(OLCCodeJam2021
    LANGUAGES CXX)

add_executable(game src/main.cpp 
    src/olcPixelGameEngine.h src/olcPixelGameEngine.cpp
    src/Engine.h src/Engine.cpp)

target_link_libraries(game X11 png GL pthread stdc++fs)
set_property(TARGET game PROPERTY CXX_STANDARD 17)
