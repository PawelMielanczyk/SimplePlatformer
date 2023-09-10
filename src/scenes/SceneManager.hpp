#pragma once

#include "EScenes.hpp"
#include "BaseScene.hpp"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void changeScene(const Scenes scene);
	BaseScene* getCurrentScene();
private:
	BaseScene* currentScene;
};