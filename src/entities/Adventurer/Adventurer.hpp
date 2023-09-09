#pragma once

#include <raylib-cpp.hpp>

#include "../Entity.hpp"

class Adventurer : public Entity
{
public:
	Adventurer();
	~Adventurer();

	void update(float dt) override;
	void draw() override;
private:
	Texture2D sprite;
};