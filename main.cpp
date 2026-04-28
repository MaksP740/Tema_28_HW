#include <iostream>
#include "PassengerCar.h"
#include "TruckCar.h"

#define modCar 1

int main() {

#if modCar == 1

    PassengerCar BMW("Volkswagen Passat (B7)", "Білий", 70, 6.5);
    PassengerCar Audi("Audi RS6 Avant 2025 ", "Чорний", 75, 12.7);

    BMW.showCar();
    Audi.showCar();

#elif modCar == 2
    TruckCar MAN("MAN", "Сірий", 300, 25, 70);
    TruckCar Volvo("Volvo", "Білий", 400, 28, 80);

    MAN.showCar();
    Volvo.showCar();



#endif




    return 0;
}
