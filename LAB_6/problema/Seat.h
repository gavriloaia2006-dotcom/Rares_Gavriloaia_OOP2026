#pragma once
#include "Car.h"
#include "Weather.h"

class Seat : public Car {
public:
    Seat();
    char* GetName() override;
    int GetLetters() override;
    int GetFuelCapacity() override;
    int GetFuelConsumption() override;
    int GetSpeed(Weather weather) override;
};