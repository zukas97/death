#include "gameloop.h"

void render() {
        BeginDrawing();  
        ClearBackground(RAYWHITE);
        EndDrawing();
}

void input() {
        if (IsKeyDown(KEY_ESC)) {
                CloseWindow();
        }
}

void update() {

}