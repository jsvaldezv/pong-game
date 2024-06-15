#pragma once
#include <raylib.h>

class Paddle
{
public:
    
    explicit Paddle() = default;
    ~Paddle() = default;
    
    struct Properties
    {
        float x;
        float y;
        
        float width;
        float height;
        
        int speed;
    };
    
    void draw();
    
    void update();
    
    void setSize (float inWidth, float inHeight);
    
    void setPosition (float inX, float inY);
    
    void setSpeed (int inSpeed);
    
    float getWidth();
    
    float getHeight();
    
private:
    
    Properties properties;
        
};

