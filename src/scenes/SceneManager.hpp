#pragma once

#include "EScenes.hpp"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void changeScene(const Scenes scene);
	Scenes getCurrentScene();
private:
	Scenes currentScene;
};