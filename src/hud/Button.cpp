#include "Button.hpp"

Button::Button(raylib::Vector2 initialPosition, raylib::Vector2 rectangleSize, Color buttonColor)
{
	this->buttonRectangle = raylib::Rectangle{ initialPosition.x, initialPosition.y, rectangleSize.x, rectangleSize.y };
	this->buttonColor = buttonColor;
}

Button::Button(raylib::Rectangle buttonRectangle, Color buttonColor)
{
	this->buttonRectangle = buttonRectangle;
	this->buttonColor = buttonColor;
}

Button::~Button()
{

}

void Button::draw()
{
	buttonRectangle.Draw(buttonColor);
}