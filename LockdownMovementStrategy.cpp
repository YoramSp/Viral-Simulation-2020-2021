#include "LockdownMovementStrategy.h"

namespace corsim
{
    double LockdownMovementStrategy::run(double i, double di, double dt)
    {
        return i + di * (dt*0.1);
    }
}