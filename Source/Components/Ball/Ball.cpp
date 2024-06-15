#include "Ball.h"

void Ball::prepare()
{
    setRadius (20);
    setPosition (GetScreenWidth()/2, GetScreenHeight()/2);
    setSpeed (7, 7);
}

void Ball::draw()
{
    DrawCircle (properties.x, properties.y, properties.radius, WHITE);
}

void Ball::update()
{
    properties.x += properties.speedX;
    properties.y += properties.speedY;
    
    if ((properties.y + properties.radius) >= GetScreenHeight() || (properties.y - properties.radius <= 0))
        properties.speedY *= -1;
    
    if ((properties.x + properties.radius) >= GetScreenWidth() || (properties.x - properties.radius <= 0))
        properties.speedX *= -1;
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

void Ball::setSpeedCollision()
{
    properties.speedX *= -1;
}

void Ball::setPosition (float inX, float inY)
{
    properties.x = inX;
    properties.y = inY;
}

float Ball::getX()
{
    return properties.x;
}

float Ball::getY()
{
    return properties.y;
}

float Ball::getRadius()
{
    return properties.radius;
}
