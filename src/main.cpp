#include "raylib.h"

int main() {
    // Crear ventana
    InitWindow(800, 600, "Pong: The Game");

    // FPS deseados
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Lógica del juego (vacía por ahora)

        // Dibujado
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Aquí escribimos en pantalla
        DrawText("Hello World!", 300, 280, 30, BLACK);

        EndDrawing();
    }

    CloseWindow(); // Cerrar ventana
    return 0;
}
