#include <iostream>
#include <raylib.h>
#include "Components/Ball/Ball.h"
#include "Components/Paddle/Paddle.h"
#include "Components/CPUPaddle/CPUPaddle.h"

const int WIDTH = 1280;
const int HEIGHT = 800;

Ball ball;
Paddle player;
CPUPaddle cpu;

int main()
{
    std::cout << "Starting Pong Game!...\n";
    
    InitWindow (WIDTH, HEIGHT, "Pong Game!");
    SetTargetFPS (60);
    
    ball.setRadius (20);
    ball.setPosition (WIDTH/2, HEIGHT/2);
    ball.setSpeed (7, 7);
    
    player.setSize (25, 120);
    player.setPosition (WIDTH - player.getWidth() - 10, HEIGHT/2 - player.getHeight()/2);
    player.setSpeed (6);
    
    cpu.setSize (25, 120);
    cpu.setPosition (10, HEIGHT/2 - player.getHeight()/2);
    cpu.setSpeed (6);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
                
        ball.update();
        player.update();
        cpu.update (ball.getY());
        
        ClearBackground (BLACK);
        DrawLine (WIDTH/2, 0, WIDTH/2, HEIGHT, WHITE);
        
        ball.draw();
        cpu.draw();
        player.draw();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
