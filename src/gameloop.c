#include "gameloop.h"
#include <raylib.h>

void render(Texture2D texture) {
        BeginDrawing();  
        ClearBackground(RAYWHITE);
	//DrawText("test", 640, 360, 15, BLACK);
	//DrawTexture(texture, 0, 0, WHITE);
	//SetTextureFilter(texture, TEXTURE_FILTER_BILINEAR);
	DrawTextureEx(texture, (Vector2){640, 360}, 0, 0.15, WHITE);
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
