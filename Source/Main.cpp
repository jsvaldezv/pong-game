#include <iostream>
#include <raylib.h>

const int screen_width = 1280;
const int screen_height = 800;

int main()
{
    std::cout << "Starting Pong Game!...\n";
    
    InitWindow (screen_width, screen_height, "Pong Game!");
    SetTargetFPS (60);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
