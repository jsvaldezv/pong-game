#include "CPUPaddle.h"

void CPUPaddle::update (int ballY)
{
    if (getY() + getHeight()/2 > ballY)
        setY (getY() - getSpeed());
    
    if (getY() + getHeight()/2 < ballY)
        setY (getY() + getSpeed());
    
    limitMovement();
}
