#include <raylib.h>

typedef struct {
    Texture2D texture;
    char* name;
    Rectangle frameRec;
    int x, y;
    int w, h;
} Character;


