#pragma once

#include <raylib-cpp.hpp>
#include <unordered_map>
#include <box2d/box2d.h>

#include "../Entity.hpp"

enum AdventurerAnimationState
{
	IDLE,
	WALK
};

class Adventurer : public Entity
{
public:
	Adventurer();
	~Adventurer();

	void update(const float dt) override;
	void draw() override;
private:
	Texture2D sprite;
	b2Body* body;
	AdventurerAnimationState animationState = AdventurerAnimationState::IDLE;
	std::unordered_map<AdventurerAnimationState, std::vector<Rectangle>> animationMap;
	size_t currentAnimationFrame = 0;
	const float animationFrameDuration = 0.2f;
	float animationTick = animationFrameDuration;
};