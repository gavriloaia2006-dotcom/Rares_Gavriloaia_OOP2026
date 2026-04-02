#include "RangeRover.h"

RangeRover::RangeRover()
{
    this->fuel_capacity = 10;
    this->fuel_consumption = 1;
    this->sunny_speed = 100;
    this->rain_speed = 90;
    this->snow_speed = 80;
    this->letters = 10;
    this->name = new char[this->letters + 1];
    const char* value = "RangeRover";
    for (int i = 0; i < this->letters; i++) {
        this->name[i] = value[i];
    }
}

char* RangeRover::GetName()
{
    return this->name;
}

int RangeRover::GetLetters()
{
    return this->letters;
}

int RangeRover::GetFuelCapacity() 
{
    return this->fuel_capacity;
}

int RangeRover::GetFuelConsumption() 
{
    return this->fuel_consumption;
}

int RangeRover::GetSpeed(Weather weather) 
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
