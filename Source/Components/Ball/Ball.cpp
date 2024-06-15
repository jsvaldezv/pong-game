#include "Ball.h"

void Ball::draw()
{
    DrawCircle (properties.x, properties.y, properties.radius, WHITE);
}

void Ball::update()
{
    properties.x += properties.speedX;
    properties.y += properties.speedY;
}

void Ball::setRadius (int inRadius)
{
    properties.radius = inRadius;
}

void Ball::setSpeed (int inSpeedX, int inSpeedY)
{
    properties.speedX = inSpeedX;
    properties.speedY = inSpeedY;
}

void Ball::setPosition (float inX, float inY)
{
    properties.x = inX;
    properties.y = inY;
}
