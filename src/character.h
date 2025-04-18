#include <raylib.h>

enum SocialStatus {
    SLAVE,
    PEASANT,
    BOURSUASIE,
    NOBLE,
    ROYALTY
};

enum Gender {
    MALE,
    FEMALE
};

enum CardType {
	CHACACTER,
	POWER
};

typedef struct {
    int health;
    int resistance;
    int attack;
    int faith;
    int sanity;
    int hunger;
    int thirst;
    int age;
    enum SocialStatus Class;
    enum Gender gender;
} Stats;

typedef struct {
    Texture2D texture;
    char* name;
    Rectangle frameRec;
    int x, y;
    int w, h;
    Stats stats;
} Character;

typedef struct {
	Character character;
	Rectangle rect;
	Color color;
	enum CardType type;
} Card;

int check_stat(char* stat);

Character create_character(Image image, int x, int y, char* name);

void render_character(Character character, double scale);
void render_characterEx(Character character, int h, int w);
