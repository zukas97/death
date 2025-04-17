#include "character.h"
#include <raylib.h>

Character create_character(Image image, int x, int y, int w, int h, char* name) {
	Character ret;
	ret.texture = LoadTextureFromImage(image);
	ret.x = x;
	ret.y = y;
	ret.w = w;
	ret.h = h;

	return ret;
}

void render_character(Character character) {
	character.texture.width = character.w;
	character.texture.height = character.h;
	DrawTextureEx(character.texture, (Vector2){character.x, character.y}, 0, 1, WHITE);
}
