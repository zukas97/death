#include <stdio.h>
#include <raylib.h>
#include "gameloop.h"

#define WIDTH 1280
#define HEIGHT 720

int main(int argc, char** argv) {
	bool running = true;
	SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_WINDOW_RESIZABLE);
	InitWindow(WIDTH, HEIGHT, "Death Fight");
	//ToggleFullscreen();

	Image test = LoadImage("assets/Eatguy.png");
	//ImageDraw(&test, test, (Rectangle){0, 0, 50.0f, 50.0f}, (Rectangle){0, 0, 50.0f, 50.0f}, WHITE);
	//Texture2D texture = LoadTextureFromImage(test);
	//SetTextureFilter(texture, TEXTURE_FILTER_TRILINEAR);
	Character eatguy = create_character(test, WIDTH/2, HEIGHT/2, "eatguy");

	UnloadImage(test);

	while (running) {
		render(eatguy);
		input(&running);
		update(&running);

	}
	UnloadTexture(eatguy.texture);
	CloseWindow();

}
