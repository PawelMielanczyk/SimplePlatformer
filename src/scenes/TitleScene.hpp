#pragma once

#include <raylib-cpp.hpp>

#include "BaseScene.hpp"
#include "../hud/Button.hpp"

class TitleScene : public BaseScene
{
public:
	TitleScene();
	~TitleScene();

	void draw() override;
	void update(const float dt) override;
private:
	Button* startButton;
	Button* exitButton;
};