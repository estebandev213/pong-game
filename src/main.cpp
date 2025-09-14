#include "raylib.h"

int main() {

    InitWindow(800, 600, "Pong: The Game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hello World!", 300, 280, 30, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
