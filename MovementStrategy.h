#pragma once

namespace corsim
{
    // Interface voor MovementStrategies
    class MovementStrategy
    {
        public:
            MovementStrategy() {}
            virtual ~ MovementStrategy() {}
            virtual double run(double i, double di, double dt) = 0;
    };
}