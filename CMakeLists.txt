cmake_minimum_required(VERSION 3.17)
project(ElsoProjekt C)

set(CMAKE_C_STANDARD 11)

add_executable(ElsoProjekt main.c users.c users.h userinterface.c userinterface.h tables.c tables.h cards.c cards.h)