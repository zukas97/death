#include <raylib.h>

typedef struct {
    Texture2D texture;
    char* name;
    Rectangle frameRec;
    int x, y;
    int w, h;
} Character;


Character create_character(Image image, int x, int y, int w, int h, char* name);

void render_character(Character character);
