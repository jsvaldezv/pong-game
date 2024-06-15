#include "Paddle.h"

void Paddle::draw()
{
    DrawRectangle (properties.x, properties.y, properties.width, properties.height, WHITE);
}

void Paddle::update()
{
    if (IsKeyDown(KEY_UP))
        properties.y = properties.y - properties.speed;
    
    if (IsKeyDown(KEY_DOWN))
        properties.y = properties.y + properties.speed;
    
    if ((properties.y + properties.height) >= GetScreenHeight())
        properties.y = GetScreenHeight() - properties.height;
    
    if (properties.y <= 0)
        properties.y = 0;
}

void Paddle::setSize (float inWidth, float inHeight)
{
    properties.width = inWidth;
    properties.height = inHeight;
}

void Paddle::setPosition (float inX, float inY)
{
    properties.x = inX;
    properties.y = inY;
}

void Paddle::setSpeed (int inSpeed)
{
    properties.speed = inSpeed;
}

float Paddle::getWidth()
{
    return properties.width;
}

float Paddle::getHeight()
{
    return properties.height;
}
