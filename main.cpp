#include <iostream>
#include "PassengerCar.h"
#include "TruckCar.h"
#include "Book.h"
#include "Voice_recoding.h"
#include <ctime>

#define mod 2

int main() {
    srand(time(0));

#if mod == 1

    PassengerCar BMW("Volkswagen Passat (B7)", "Білий", 70, 6.5);
    PassengerCar Audi("Audi RS6 Avant 2025 ", "Чорний", 75, 12.7);

    BMW.showCar();
    Audi.showCar();

    TruckCar MAN("MAN", "Сірий", 300, 25, 70);
    TruckCar Volvo("Volvo", "Білий", 400, 28, 80);

    MAN.showCar();
    Volvo.showCar();



#elif mod == 2

    Book c("Тарас Шевченко", "Кобзар", "01.01.2019", 9781112223334);
    c.showInfo();

    Voice_recoding rec1("Іван", 90, "28.02.2026");
    rec1.showInfo();

#endif





    return 0;
}
