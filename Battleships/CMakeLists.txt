cmake_minimum_required(VERSION 3.19)
project(Battleships)

set(CMAKE_CXX_STANDARD 14)

add_executable(Battleships main.cpp battlefield.h enemyBattlefield.h)