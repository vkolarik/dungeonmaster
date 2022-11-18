cmake_minimum_required(VERSION 3.23)
project(projekt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-static")

add_executable(projekt main.cpp GameEngine.cpp GameEngine.h Interface/InterfaceRenderer.cpp Interface/InterfaceRenderer.h Interface/InputHandler.cpp Interface/InputHandler.h Logic/CommandProcessor.cpp Logic/CommandProcessor.h Logic/GameState.cpp Logic/GameState.h)
