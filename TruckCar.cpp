//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#include "TruckCar.h"
#include "PassengerCar.h"

TruckCar::TruckCar() {
    loadCapacity = 0;
}

TruckCar::TruckCar(string brand, string color, double fuelTankVolumeLiters, double fuelConsumption,
    double loadCapacity)
: PassengerCar(brand, color, fuelTankVolumeLiters, fuelConsumption){
    this->loadCapacity = loadCapacity;
}

void TruckCar::setloadCapacity(double loadCapacity) {
    this->loadCapacity = loadCapacity;
}

double TruckCar::getLoadCapacity() const {
    return loadCapacity;
}

double TruckCar::calcTruck(double price) const {
    return ((fuelConsumption / 100.0) * price) / loadCapacity;
}

void TruckCar::showCar() const {

    cout << "\n=====================================\n";
    cout << "       ВАНТАЖНИЙ АВТОМОБІЛЬ\n";
    cout << "=====================================\n";

    cout << "Марка              : " << getBrand() << endl;
    cout << "Колір              : " << getColor() << endl;
    cout << "Об'єм бака         : " << getFuelTankVolumeLiters() << " л" << endl;
    cout << "Витрата палива     : " << getFuelConsumption() << " л/100 км" << endl;
    cout << "Вантажопідйомність : " << loadCapacity << " т" << endl;

    cout << "-------------------------------------\n";
    cout << "Запас ходу         : " << calculateFuel() << " км" << endl;

    cout << "=====================================\n";
}
