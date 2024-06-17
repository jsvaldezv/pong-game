#include "../Helpers/Sizes.h"
#include "Ball/Ball.h"
#include "CPUPaddle/CPUPaddle.h"
#include "Paddle/Paddle.h"
#include <raylib.h>

class MainComponent
{
public:
    explicit MainComponent();
    ~MainComponent();

    void prepare();

    void process();

    void draw();

    void drawBackground();

    void checkForCollisions();

private:
    int PlayerScore { 0 };
    int CPUScore { 0 };

    Ball ball { PlayerScore, CPUScore };
    Paddle player;
    CPUPaddle cpu;
};
