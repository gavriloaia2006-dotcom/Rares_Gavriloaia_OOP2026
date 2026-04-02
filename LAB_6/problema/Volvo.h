#pragma once
#include "Car.h"
#include "Weather.h"

class Volvo : public Car {
public:
    Volvo();
    char* GetName() override;
    int GetLetters() override;
    int GetFuelCapacity() override;
    int GetFuelConsumption() override;
    int GetSpeed(Weather weather) override;
};
