#include "Fiat.h"

Fiat::Fiat()
{
    this->fuel_capacity = 5;
    this->fuel_consumption = 1;
    this->sunny_speed = 60;
    this->rain_speed = 50;
    this->snow_speed = 40;
    this->letters = 4;
    this->name = new char[this->letters + 1];
    const char* value = "Fiat";
    for (int i = 0; i < this->letters; i++) {
        this->name[i] = value[i];
    }
}

char* Fiat::GetName()
{
    return this->name;
}

int Fiat::GetLetters()
{
    return this->letters;
}

int Fiat::GetFuelCapacity() 
{
    return this->fuel_capacity;
}

int Fiat::GetFuelConsumption() 
{
    return this->fuel_consumption;
}

int Fiat::GetSpeed(Weather weather) 
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
