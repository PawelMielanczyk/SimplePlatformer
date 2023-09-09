// RaylibCppSetup.cpp : Defines the entry point for the application.
//

#include <raylib-cpp.hpp>


int main()
{
	raylib::Window window(800, 450, "Raylib CPP");
	SetTargetFPS(60);
	while (!window.ShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Bangla", 160, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
	return 0;
}
