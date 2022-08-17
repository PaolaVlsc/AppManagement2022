cmake_minimum_required(VERSION 3.16)
project(AppManagement2022)

set(CMAKE_CXX_STANDARD 14)

add_executable(AppManagement2022 main.cpp Developer.cpp Developer.h TypeFile.cpp TypeFile.h Games.cpp Games.h MediaPlayer.cpp MediaPlayer.h Application.cpp Application.h AppData.cpp AppData.h)
