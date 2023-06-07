#include "raylib.h"

int main(void)
{
	SetConfigFlags(FLAG_WINDOW_HIGHDPI);

	InitWindow(800, 480, "raylib [core] example - basic window");

	SetTextureFilter(GetFontDefault().texture, TEXTURE_FILTER_POINT);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
	
	CloseWindow();

	return 0;
}
