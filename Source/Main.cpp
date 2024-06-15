#include <iostream>
#include <raylib.h>
#include "Components/Ball/Ball.h"
#include "Components/Paddle/Paddle.h"

const int WIDTH = 1280;
const int HEIGHT = 800;

Ball ball;

int main()
{
    std::cout << "Starting Pong Game!...\n";
    
    InitWindow (WIDTH, HEIGHT, "Pong Game!");
    SetTargetFPS (60);
    
    ball.setRadius (20);
    ball.setPosition (WIDTH/2, HEIGHT/2);
    ball.setSpeed (7, 7);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
                
        ball.update();
        
        ClearBackground (BLACK);
        DrawLine (WIDTH/2, 0, WIDTH/2, HEIGHT, WHITE);
        ball.draw();
        DrawRectangle (10, HEIGHT/2 - 60, 25, 120, WHITE);
        DrawRectangle (WIDTH - 35, HEIGHT/2 - 60, 25, 120, WHITE);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
