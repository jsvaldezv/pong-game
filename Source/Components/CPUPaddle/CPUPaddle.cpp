#include "CPUPaddle.h"

void CPUPaddle::prepare()
{
    setSize (25, 120);
    setSpeed (6);
    setPosition (GetScreenWidth() - getWidth() - 10, GetScreenHeight() / 2 - getHeight() / 2);
}

void CPUPaddle::update (int ballY)
{
    if (getY() + getHeight() / 2 > ballY)
        setY (getY() - getSpeed());

    if (getY() + getHeight() / 2 < ballY)
        setY (getY() + getSpeed());

    limitMovement();
}
