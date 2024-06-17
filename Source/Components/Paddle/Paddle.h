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

    void prepare();

    void draw();

    void update();

    void setSize (float inWidth, float inHeight);

    void setPosition (float inX, float inY);

    void setSpeed (int inSpeed);

    void setY (float inY);

    float getWidth();

    float getHeight();

    float getX();

    float getY();

protected:
    float getSpeed();

    void limitMovement();

private:
    Properties properties;
};
