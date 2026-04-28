//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#ifndef TEMA_28_HW_TRUCKCAR_H
#define TEMA_28_HW_TRUCKCAR_H

#include <iostream>
#include <string>

#include "PassengerCar.h"
using namespace std;

class TruckCar: public PassengerCar {
protected:
    double loadCapacity;

public:
    TruckCar();
    TruckCar(string brand, string color, double fuelTankVolumeLiters, double fuelConsumption, double loadCapacity);

    void setloadCapacity(double loadCapacity);
    double getLoadCapacity() const;

    double calcTruck(double price) const;
    void showCar() const;

};


#endif //TEMA_28_HW_TRUCKCAR_H
