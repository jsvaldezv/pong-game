#pragma once
#include <raylib.h>

class Ball
{
public:
    
    explicit Ball() = default;
    ~Ball() = default;
    
    struct Properties
    {
        float x;
        float y;
        
        int speedX;
        int speedY;
        
        int radius;
    };
    
    void draw();
    
    void update();
    
    void setRadius (int inRadius);
    
    void setSpeed (int inSpeedX, int inSpeedY);
    
    void setPosition (float inX, float inY);
    
private:
    
    Properties properties;
        
};
