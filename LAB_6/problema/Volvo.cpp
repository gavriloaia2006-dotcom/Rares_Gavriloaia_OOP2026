#include "Volvo.h"

Volvo::Volvo()
{
    this->fuel_capacity = 10;
    this->fuel_consumption = 1;
    this->sunny_speed = 100;
    this->rain_speed = 90;
    this->snow_speed = 80;
    this->letters = 5;
    this->name = new char[this->letters + 1];
    const char* value = "Volvo";
    for (int i = 0; i < this->letters; i++) {
        this->name[i] = value[i];
    }
}

char* Volvo::GetName()
{
    return this->name;
}

int Volvo::GetLetters()
{
    return this->letters;
}

int Volvo::GetFuelCapacity() 
{
    return this->fuel_capacity;
}

int Volvo::GetFuelConsumption() 
{
    return this->fuel_consumption;
}

int Volvo::GetSpeed(Weather weather) 
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
