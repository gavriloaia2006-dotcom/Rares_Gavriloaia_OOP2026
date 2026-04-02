#include "BMW.h"

BMW::BMW()
{
    this->fuel_capacity = 10;
    this->fuel_consumption = 1;
    this->sunny_speed = 100;
    this->rain_speed = 90;
    this->snow_speed = 80;
    this->letters = 3;
    this->name = new char[this->letters + 1];
    const char* value = "BMW";
    for (int i = 0; i < this->letters; i++) {
        this->name[i] = value[i];
    }
}

char* BMW::GetName()
{
    return this->name;
}

int BMW::GetLetters()
{
    return this->letters;
}

int BMW::GetFuelCapacity()
{
    return this->fuel_capacity;
}

int BMW::GetFuelConsumption()
{
    return this->fuel_consumption;
}

int BMW::GetSpeed(Weather weather)
{
    if (weather == Weather::Sunny)
    {
        return this->sunny_speed;
    }
    if (weather == Weather::Rain)
    {
        return this->rain_speed;
    }
    return this->snow_speed;
}
