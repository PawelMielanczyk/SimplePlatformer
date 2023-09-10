#pragma once

class Entity
{
public:
	virtual ~Entity() = default;
	virtual void draw() = 0;
	virtual void update(const float dt) = 0;
};