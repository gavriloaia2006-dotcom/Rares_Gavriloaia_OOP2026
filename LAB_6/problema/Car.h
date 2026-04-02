#pragma once
#include "Weather.h"

class Car
{
protected:
    int fuel_capacity;
    int fuel_consumption;
    int sunny_speed;
    int rain_speed;
    int snow_speed;
    int letters;
    char* name;

public:
    virtual ~Car() = default;
    virtual char* GetName() = 0;
    virtual int GetLetters() = 0;
    virtual int GetFuelCapacity() = 0;
    virtual int GetFuelConsumption() = 0;
    virtual int GetSpeed(Weather weather) = 0;
};
