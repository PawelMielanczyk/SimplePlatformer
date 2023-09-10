#include <raylib-cpp.hpp>

#include "TitleScene.hpp"

TitleScene::TitleScene()
{

}

TitleScene::~TitleScene()
{

}

void TitleScene::update(const float dt)
{

}

void TitleScene::draw()
{
	raylib::DrawText("Bangla", 200, 200, 30, RED);
}