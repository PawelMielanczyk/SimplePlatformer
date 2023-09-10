#include "SceneManager.hpp"

#include "TitleScene.hpp"

SceneManager::SceneManager()
{
	this->currentScene = new TitleScene();
}

SceneManager::~SceneManager()
{
	delete this->currentScene;
}

void SceneManager::changeScene(const Scenes scene)
{
	if (currentScene != nullptr)
		delete currentScene;
	switch (scene)
	{
	case TITLE:
		currentScene = new TitleScene();
		break;
	case GAME:
		//currentScene = new GameScene();
		break;
	}
}

BaseScene* SceneManager::getCurrentScene()
{
	return this->currentScene;
}