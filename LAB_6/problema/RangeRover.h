#pragma once
#include "Car.h"
#include "Weather.h"

class RangeRover : public Car {
public:
    RangeRover();
    char* GetName() override;
    int GetLetters() override;
    int GetFuelCapacity() override;
    int GetFuelConsumption() override;
    int GetSpeed(Weather weather) override;
};