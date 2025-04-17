#include <raylib.h>

enum SocialStatus {
    SLAVE,
    PEASANT,
    BOURSUASIE,
    NOBLE,
    ROYALTY
}

enum Gender {
    MALE,
    FEMALE
}

typedef struct {
    int health;
    int resistance;
    int attack;
    int faith;
    int sanity;
    int hunger;
    int thirst;
    SocialStatus class;
    Gender gender;
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
