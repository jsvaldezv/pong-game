#include <iostream>
#include <raylib.h>
#include "Components/Ball/Ball.h"
#include "Components/Paddle/Paddle.h"
#include "Components/CPUPaddle/CPUPaddle.h"

const int WIDTH = 1280;
const int HEIGHT = 800;

int PlayerScore = 0;
int CPUScore = 0;

Ball ball { PlayerScore, CPUScore };
Paddle player;
CPUPaddle cpu;

void checkForCollisions()
{
    // Check for collisions
    if (CheckCollisionCircleRec (Vector2 { ball.getX(), ball.getY() },
                                 ball.getRadius(),
                                 Rectangle { player.getX(), player.getY(), player.getWidth(), player.getHeight() }))
    {
        ball.setSpeedCollision();
    }
    
    if (CheckCollisionCircleRec (Vector2 { ball.getX(), ball.getY() },
                                 ball.getRadius(),
                                 Rectangle { cpu.getX(), cpu.getY(), cpu.getWidth(), cpu.getHeight() }))
    {
        ball.setSpeedCollision();
    }
}

void prepare()
{
    InitWindow (WIDTH, HEIGHT, "Pong Game!");
    SetTargetFPS (60);

    ball.prepare();
    player.prepare();
    cpu.prepare();
}

void draw()
{
    ball.update();
    player.update();
    cpu.update (ball.getY());
    
    ClearBackground (BLACK);
    DrawLine (WIDTH/2, 0, WIDTH/2, HEIGHT, WHITE);
    
    ball.draw();
    cpu.draw();
    player.draw();
    
    DrawText (TextFormat ("%i", CPUScore), WIDTH/4 - 20, 20, 80, WHITE);
    DrawText (TextFormat ("%i", PlayerScore), 3 * WIDTH/4 - 20, 20, 80, WHITE);
}

int main()
{
    std::cout << "Starting Pong Game!...\n";
    
    prepare();
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
    
        checkForCollisions();
        draw();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
