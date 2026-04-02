#include "Circuit.h"
#include "Car.h"
#include <iostream>
using namespace std;

Circuit::~Circuit()
{
    delete[] raceResults;
    delete[] cars;
}

void Circuit::SetLength(int len)
{
    length = len;
}

void Circuit::SetWeather(Weather w)
{
    weather = w;
}


void Circuit::AddCar(Car* car)
{
    number_of_cars++;
    if (!cars)
    {
        cars = new Car*[number_of_cars];
        cars[0] = car;
    } else
    {
        auto temp = new Car*[number_of_cars];
        for (int i = 0; i < number_of_cars - 1; i++)
        {
            temp[i] = cars[i];
        }
        delete [] cars;
        cars = temp;
        cars[number_of_cars - 1] = car;
    }
}

void Circuit::Race() {
    if (raceResults) {
        delete[] raceResults;
    }

    raceResults = new RaceResult[number_of_cars];

    for (int i = 0; i < number_of_cars; i++) {
        raceResults[i].time = -1.0;
        raceResults[i].finished = false;
    }

    for (int i = 0; i < number_of_cars; i++) {
        Car* temp = cars[i];
        raceResults[i].name = temp->GetName();
        raceResults[i].letters = temp->GetLetters();
        int speed = temp->GetSpeed(weather);
        double fuelNeeded = (length / 10.0) * temp->GetFuelConsumption();

        if (fuelNeeded > temp->GetFuelCapacity()) {
            raceResults[i].finished = false;
        } else {
            raceResults[i].finished = true;
        }

        double time = length / speed; 
        raceResults[i].time = time;
    }
}

void Circuit::ShowFinalRanks() const
{
    for (int step = 0; step < number_of_cars - 1; ++step) {
        for (int i = 0; i < number_of_cars - step - 1; ++i) {
            if (raceResults[i].time > raceResults[i + 1].time) {
                swap(raceResults[i], raceResults[i + 1]);
            }
        }
    }

    for (int i = 0; i < number_of_cars; i++)
    {
        if (raceResults[i].finished)
        {
            char* ch_temp = raceResults[i].name;
            int index = 0;
            while (*ch_temp != '\0' && index < raceResults[i].letters)
            {
                printf("%c",  ch_temp[index++]);
            }
            printf(" finished in %f\n", raceResults[i].time);
        }
    }
}

void Circuit::ShowWhoDidNotFinish() const
{
    for (int i = 0; i < number_of_cars; i++)
    {
        if (raceResults[i].finished == false)
        {
            char* ch_temp = raceResults[i].name;
            int index = 0;
            while (*ch_temp != '\0' && index < raceResults[i].letters)
            {
                printf("%c",  ch_temp[index++]);
            }
            printf(" did not finish\n");
        }
    }
}