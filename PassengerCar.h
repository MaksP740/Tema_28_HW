//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#ifndef TEMA_28_HW_PASSENGERCAR_H
#define TEMA_28_HW_PASSENGERCAR_H

#include <iostream>
#include <string>
using namespace std;

class PassengerCar {
protected:
        string brand;
        string color;
        double fuelTankVolumeLiters;
        double fuelConsumption;

public:
        PassengerCar();
        PassengerCar(string brand, string color, double fuelTankVolumeLiters, double fuelConsumption);

        void setBrand(string brand);
        void setColor(string color);
        void setFuelTankVolumeLiters(double fuelTankVolumeLiters);
        void setFuelConsumption(double fuelConsumption);

        string getBrand() const;
        string getColor() const;
        double getFuelTankVolumeLiters() const;
        double getFuelConsumption() const;

        double calculateFuel() const;
        void showCar() const;

};


#endif //TEMA_28_HW_PASSENGERCAR_H
