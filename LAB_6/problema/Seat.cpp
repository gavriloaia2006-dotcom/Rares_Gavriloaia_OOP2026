#include "Seat.h"

Seat::Seat()
{
    this->fuel_capacity = 10;
    this->fuel_consumption = 1;
    this->sunny_speed = 100;
    this->rain_speed = 90;
    this->snow_speed = 80;
    this->letters = 4;
    this->name = new char[this->letters + 1];
    const char* value = "Seat";
    for (int i = 0; i < this->letters; i++) {
        this->name[i] = value[i];
    }
}

char* Seat::GetName()
{
    return this->name;
}

int Seat::GetLetters()
{
    return this->letters;
}

int Seat::GetFuelCapacity() 
{
    return this->fuel_capacity;
}

int Seat::GetFuelConsumption() 
{
    return this->fuel_consumption;
}

int Seat::GetSpeed(Weather weather) 
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
