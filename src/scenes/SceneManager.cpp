#include "SceneManager.hpp"

SceneManager::SceneManager()
{
	this->currentScene = TITLE;
}

SceneManager::~SceneManager()
{

}

void SceneManager::changeScene(const Scenes scene)
{
	this->currentScene = scene;
}

Scenes SceneManager::getCurrentScene()
{
	return this->currentScene;
}