#pragma once
#include <raylib.h>
#include "../../Helpers/Colours.h"

class Ball
{
public:
    
    explicit Ball (int& ps, int& cpus);
    ~Ball() = default;
    
    struct Properties
    {
        float x;
        float y;
        
        int speedX;
        int speedY;
        
        int radius;
    };
    
    void prepare();
    
    void draw();
    
    void update();
    
    void resetBall();
    
    void setRadius (int inRadius);
    
    void setSpeed (int inSpeedX, int inSpeedY);
    
    void setSpeedCollision();
    
    void setPosition (float inX, float inY);
    
    float getX();
    
    float getY();
    
    float getRadius();
    
private:
    
    int& PlayerScore;
    int& CPUScore;
    
    Properties properties;
        
};
