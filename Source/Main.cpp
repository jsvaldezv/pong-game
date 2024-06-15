#include <iostream>
#include <raylib.h>

const int WIDTH = 1280;
const int HEIGHT = 800;

int main()
{
    std::cout << "Starting Pong Game!...\n";
    
    InitWindow (WIDTH, HEIGHT, "Pong Game!");
    SetTargetFPS (60);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        DrawLine (WIDTH/2, 0, WIDTH/2, HEIGHT, WHITE);
        DrawCircle (WIDTH/2, HEIGHT/2, 20, WHITE);
        DrawRectangle (10, HEIGHT/2 - 60, 25, 120, WHITE);
        DrawRectangle (WIDTH - 35, HEIGHT/2 - 60, 25, 120, WHITE);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
