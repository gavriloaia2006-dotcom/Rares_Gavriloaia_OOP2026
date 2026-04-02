#pragma once
#include "Car.h"
#include "Weather.h"

struct RaceResult
{
    
    int letters;
    char* name;
    double time{};
    bool finished{};
};

class Circuit {
    int length = 0;
    Weather weather;
    Car** cars = nullptr;
    int number_of_cars = 0;
    RaceResult* raceResults = nullptr; 

public:
    ~Circuit();

    void SetLength(int len);
    void SetWeather(Weather w);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks() const;
    void ShowWhoDidNotFinish() const;
};
