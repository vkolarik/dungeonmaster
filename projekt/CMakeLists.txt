cmake_minimum_required(VERSION 3.23)
project(projekt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-static")

add_executable(projekt main.cpp GameEngine.cpp GameEngine.h Interface/InterfaceRenderer.cpp Interface/InterfaceRenderer.h Interface/InputHandler.cpp Interface/InputHandler.h Logic/CommandProcessor.cpp Logic/CommandProcessor.h Logic/GameState.cpp Logic/GameState.h Interface/RenderableBlock.cpp Interface/RenderableBlock.h Interface/GuiBlocks/GameTitle.cpp Interface/GuiBlocks/GameTitle.h Interface/GuiBlocks/Inventory.cpp Interface/GuiBlocks/Inventory.h Interface/GuiBlocks/Stats.cpp Interface/GuiBlocks/Stats.h Interface/GuiBlocks/GameField.cpp Interface/GuiBlocks/GameField.h Interface/GuiBlocks/Hints.cpp Interface/GuiBlocks/Hints.h Interface/GuiBlocks/Controls.cpp Interface/GuiBlocks/Controls.h Resources/GameTile.cpp Resources/GameTile.h Resources/Tiles/FreeSpace.cpp Resources/Tiles/FreeSpace.h Resources/Tiles/Wall.cpp Resources/Tiles/Wall.h Resources/GameTileCollection.cpp Resources/GameTileCollection.h Resources/GameTileCollectionFactory.cpp Resources/GameTileCollectionFactory.h Resources/Player.cpp Resources/Player.h)
