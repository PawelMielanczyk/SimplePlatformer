#include "Adventurer.hpp"

#include "Constants.hpp"

Adventurer::Adventurer()
{
	this->sprite = LoadTexture(AppConstants::GetAssetPath("adventurer-sprite.png").c_str());

	auto makePlayerFrameRect = [](float frameNumber) -> Rectangle
	{
		return
		{
			.x = frameNumber * 50.0f,
			.y = 0.0f,
			.width = 50.0f,
			.height = 37.0f
		};
	};

	animationMap[IDLE] = {
		makePlayerFrameRect(0),
		makePlayerFrameRect(1),
		makePlayerFrameRect(2),
		makePlayerFrameRect(3)
	};
}

Adventurer::~Adventurer()
{
	UnloadTexture(sprite);
}

void Adventurer::draw()
{
	
	auto currentAnimationState = animationMap[animationState];
	auto currentAnimationRectangle = currentAnimationState[currentAnimationFrame % currentAnimationState.size()];

	DrawTexturePro(sprite, currentAnimationRectangle, { 400, 200, 50 * 2, 37 * 2 }, { 0, 0 }, 0.0f, WHITE);
}

void Adventurer::update(float dt)
{
	animationTick -= dt;
	if (animationTick <= 0)
	{
		animationTick = animationFrameDuration;
		currentAnimationFrame += 1;
	}
}