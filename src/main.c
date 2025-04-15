#include <stdio.h>
#include <raylib.h>

#define WIDTH 1280
#define HEIGHT 720

int main (int argc char** argv) {
    InitWindow(WIDTH, HEIGHT, "Death Fight");

    while (!WindowShouldClose()) {
        render();
        input();
        update();

    }
    
}