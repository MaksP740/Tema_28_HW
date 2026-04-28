//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#include "PassengerCar.h"

PassengerCar::PassengerCar() {
    brand = "Невідомо";
    color = "Невідомо";
    fuelTankVolumeLiters = 0;
    fuelConsumption = 0;
}

PassengerCar::PassengerCar(string brand, string color, double fuelTankVolumeLiters, double fuelConsumption) {
    this->brand = brand;
    this->color = color;
    this->fuelTankVolumeLiters = fuelTankVolumeLiters;
    this->fuelConsumption = fuelConsumption;
}

void PassengerCar::setBrand(string brand) {
    this->brand = brand;
}

void PassengerCar::setColor(string color) {
    this->color = color;
}

void PassengerCar::setFuelTankVolumeLiters(double fuelTankVolumeLiters) {
    this->fuelTankVolumeLiters = fuelTankVolumeLiters;
}

void PassengerCar::setFuelConsumption(double fuelConsumption) {
    this->fuelConsumption = fuelConsumption;
}

string PassengerCar::getBrand() const {
    return brand;
}

string PassengerCar::getColor() const {
    return color;
}

double PassengerCar::getFuelTankVolumeLiters() const {
    return fuelTankVolumeLiters;
}

double PassengerCar::getFuelConsumption() const {
    return fuelConsumption;
}

double PassengerCar::calculateFuel() const {
    return (fuelTankVolumeLiters / fuelConsumption) * 100.0;
}

void PassengerCar::showCar() const {

    cout << "\n=====================================\n";
    cout << "        ЛЕГКОВИЙ АВТОМОБІЛЬ \n";
    cout << "=====================================\n";

    cout << "Марка              : " << brand << endl;
    cout << "Колір              : " << color << endl;
    cout << "Об'єм бака         : " << fuelTankVolumeLiters << " л" << endl;
    cout << "Витрата палива     : " << fuelConsumption << " л/100 км" << endl;

    cout << "-------------------------------------\n";
    cout << "Запас ходу         : " << calculateFuel() << " км" << endl;

    cout << "=====================================\n";
}
