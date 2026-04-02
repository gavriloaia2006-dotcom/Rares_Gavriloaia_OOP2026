#pragma once
#include "Car.h"
#include "Weather.h"

class Fiat : public Car {
public:
    Fiat();
    char* GetName() override;
    int GetLetters() override;
    int GetFuelCapacity() override;
    int GetFuelConsumption() override;
    int GetSpeed(Weather weather) override;
};