#include <stdio.h>
#include <raylib.h>
#include "gameloop.h"

#define WIDTH 1280
#define HEIGHT 720

int main(int argc, char** argv) {
	InitWindow(WIDTH, HEIGHT, "Death Fight");

	Image test = LoadImage("assets/Eatguy.png");
	//ImageDraw(&test, test, (Rectangle){0, 0, 50.0f, 50.0f}, (Rectangle){0, 0, 50.0f, 50.0f}, WHITE);
	Texture2D texture = LoadTextureFromImage(test);
	UnloadImage(test);

	while (!WindowShouldClose()) {
		render(texture);
		input();
		update();

	}
	UnloadTexture(texture);
	CloseWindow();

}
