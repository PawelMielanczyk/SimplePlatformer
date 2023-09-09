#include "Adventurer.hpp"

#include "Constants.hpp"

Adventurer::Adventurer()
{
	this->sprite = LoadTexture(AppConstants::GetAssetPath("adventurer-sprite.png").c_str());
}

Adventurer::~Adventurer()
{
	UnloadTexture(sprite);
}

void Adventurer::draw()
{

}

void Adventurer::update(float dt)
{

}