#pragma once
#include "MovementStrategy.h"

namespace corsim
{
    // Overerving van Movementstrategy
    class LockdownMovementStrategy : public MovementStrategy
    {
        public:
            double run(double i, double di, double dt) override;
    };
}