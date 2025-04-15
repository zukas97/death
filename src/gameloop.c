#include "gameloop.h"
#include <raylib.h>

void render(Texture2D texture) {
        BeginDrawing();  
        ClearBackground(RAYWHITE);
	//DrawText("test", 640, 360, 15, BLACK);
	//DrawTexture(texture, 0, 0, WHITE);
	DrawTextureEx(texture, (Vector2){640, 360}, 0, 0.1, WHITE);
	//UnloadTexture(texture);
	//
        EndDrawing();
}

void input() {
        if (IsKeyDown(KEY_END)) {
                CloseWindow();
        }
}

void update() {

}
