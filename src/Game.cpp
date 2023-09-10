#include "Game.hpp"

#include "Constants.hpp"

Game::Game()
{
	this->sceneManager = new SceneManager();
	this->gameWindow = new raylib::Window(800, 450, "Raylib CPP");
	SetTargetFPS(60);
}

Game::~Game()
{
	delete this->sceneManager;
	delete this->gameWindow;
}

void Game::gameLoop()
{
	while (!gameWindow->ShouldClose())
	{
		float dt = GetFrameTime();
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Bangla", 160, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
}