#pragma once
#include <raylib.h>
#include "../Paddle/Paddle.h"

class CPUPaddle : public Paddle
{
public:
    
    explicit CPUPaddle() = default;
    ~CPUPaddle() = default;
    
    void update (int ballY);
};
