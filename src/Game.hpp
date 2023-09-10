#pragma once

#include <raylib-cpp.hpp>

#include "scenes/SceneManager.hpp"

class Game
{
public:
	Game();
	~Game();
	void gameLoop();
private:
	SceneManager* sceneManager;
	raylib::Window* gameWindow;
};