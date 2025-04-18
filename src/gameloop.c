#include "gameloop.h"
#include <raylib.h>

void render(Character eatguy) {
        BeginDrawing();  
        ClearBackground(RAYWHITE);
	//DrawText("test", 640, 360, 15, BLACK);
	//DrawTexture(texture, 0, 0, WHITE);
	GenTextureMipmaps(&eatguy.texture);
	SetTextureFilter(eatguy.texture, TEXTURE_FILTER_TRILINEAR);
	//DrawTextureEx(texture, (Vector2){640, 360}, 0, 0.15, WHITE);
	render_character(eatguy, 0.25);
	//UnloadTexture(texture);
	//
        EndDrawing();
}

void input(bool* running) {
        if (IsKeyDown(KEY_END)) {
                //CloseWindow();
		*running = false;
        }
}

void update(bool* running) {
	if (WindowShouldClose()) {
		*running = false;
	}
}
