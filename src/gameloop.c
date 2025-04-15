#include "gameloop.h"

void render() {
        BeginDrawing();  
        ClearBackground(RAYWHITE);
        EndDrawing();
}

void input() {
        if (IsKeyDown(KEY_END)) {
                CloseWindow();
        }
}

void update() {

}
