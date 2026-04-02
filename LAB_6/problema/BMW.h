#pragma once
#include "Car.h"
#include "Weather.h"

class BMW : public Car {
public:
    BMW();
    char* GetName() override;
    int GetLetters() override;
    int GetFuelCapacity() override;
    int GetFuelConsumption() override;
    int GetSpeed(Weather weather) override;
};