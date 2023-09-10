#pragma once

#include "BaseScene.hpp"

class TitleScene : public BaseScene
{
public:
	TitleScene();
	~TitleScene();

	void draw() override;
	void update(const float dt) override;
};