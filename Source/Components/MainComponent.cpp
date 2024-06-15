#include "MainComponent.h"

MainComponent::MainComponent()
{
    InitWindow (WIDTH, HEIGHT, "Pong Game!");
    SetTargetFPS (60);
    
    prepare();
    process();
}

MainComponent::~MainComponent()
{
    CloseWindow();
}

void MainComponent::prepare()
{
    ball.prepare();
    player.prepare();
    cpu.prepare();
}

void MainComponent::process()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();
    
        checkForCollisions();
        draw();
        
        EndDrawing();
    }
}

void MainComponent::draw()
{
    ball.update();
    player.update();
    cpu.update (ball.getY());
    
    drawBackground();
    ball.draw();
    cpu.draw();
    player.draw();
    
    DrawText (TextFormat ("%i", CPUScore), WIDTH/4 - 20, 20, 80, WHITE);
    DrawText (TextFormat ("%i", PlayerScore), 3 * WIDTH/4 - 20, 20, 80, WHITE);
}

void MainComponent::drawBackground()
{
    ClearBackground (Colours::DarkGreen);
    DrawRectangle (WIDTH/2, 0, WIDTH/2, HEIGHT, Colours::Green);
    DrawCircle (WIDTH/2, HEIGHT/2, 150, Colours::LightGreen);
    DrawLine (WIDTH/2, 0, WIDTH/2, HEIGHT, WHITE);
}

void MainComponent::checkForCollisions()
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
