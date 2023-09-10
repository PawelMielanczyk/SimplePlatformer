#include <raylib-cpp.hpp>

#include "TitleScene.hpp"

TitleScene::TitleScene()
{
	this->startButton = new Button(raylib::Rectangle{ 300, 100, 100, 40 }, GREEN);
	this->exitButton = new Button(raylib::Rectangle{ 400, 200, 100, 40 }, RED);
}

TitleScene::~TitleScene()
{
	delete startButton;
	delete exitButton;
}

void TitleScene::update(const float dt)
{

}

void TitleScene::draw()
{
	raylib::DrawText("Bangla", 200, 200, 30, RED);
	startButton->draw();
	exitButton->draw();
}