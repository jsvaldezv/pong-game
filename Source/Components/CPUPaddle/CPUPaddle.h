#pragma once
#include "../Paddle/Paddle.h"
#include <raylib.h>

class CPUPaddle : public Paddle
{
public:
    explicit CPUPaddle() = default;
    ~CPUPaddle() = default;

    void prepare();

    void update (int ballY);
};
