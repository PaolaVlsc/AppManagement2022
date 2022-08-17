cmake_minimum_required(VERSION 3.16)
project(AppManagement2022)

set(CMAKE_CXX_STANDARD 14)

add_executable(AppManagement2022 main.cpp "Class Files/Developer.cpp" "Class Headers/Developer.h" "Class Files/TypeFile.cpp" "Class Headers/TypeFile.h" "Class Files/Game.cpp" "Class Headers/Game.h" "Class Files/MediaPlayer.cpp" "Class Headers/MediaPlayer.h" "Class Files/Application.cpp" "Class Headers/Application.h" "Class Files/AppData.cpp" "Class Headers/AppData.h")
