#include <raylib.h>

typedef struct {
    int health;
    int resistance;
    int attack;
    int faith;
} Stats;

typedef struct {
    Texture2D texture;
    char* name;
    Rectangle frameRec;
    int x, y;
    int w, h;
    Stats stats;
} Character;

int check_stat(char* stat);

Character create_character(Image image, int x, int y, int w, int h, char* name);

void render_character(Character character);
