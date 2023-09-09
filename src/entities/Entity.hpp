#pragma once

class Entity
{
public:
	virtual ~Entity() = default;
	virtual void draw() = 0;
	virtual void update(float dt) = 0;
};