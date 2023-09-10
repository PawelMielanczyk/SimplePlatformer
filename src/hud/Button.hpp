#pragma once

#include <raylib-cpp.hpp>

class Button
{
public:
	Button(raylib::Vector2 initialPosition, raylib::Vector2 rectangleSize, Color buttonColor);
	Button(raylib::Rectangle buttonRectangle, Color buttonColor);
	~Button();
	void draw();
private:
	raylib::Rectangle buttonRectangle;
	Color buttonColor;
};