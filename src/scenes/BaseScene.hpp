#pragma once

#include "EScenes.hpp"

class BaseScene
{
public:
	virtual ~BaseScene() = default;
	virtual void draw() = 0;
	virtual void update(const float dt) = 0;
};