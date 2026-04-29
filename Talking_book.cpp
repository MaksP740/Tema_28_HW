//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#include "Talking_book.h"

Talking_book::Talking_book() {
    Tapes = 0;
}

Talking_book::Talking_book(string author, string edition, string pubDate, long isbn, string speaker, int duration,
    string recoding_date, int Tapes) :Book(author, edition, pubDate, isbn), Voice_recoding(speaker, duration, recoding_date) {
    this->Tapes = Tapes;
}

void Talking_book::setTapes(int Tapes) {
    this->Tapes = Tapes;
}

int Talking_book::getTapes() const {
    return Tapes;
}

void Talking_book::showInfo() const {

    Book::showInfo();
    Voice_recoding::showInfo();
    cout << "Кількість касет   : " << Tapes << endl;

    cout << "=====================================\n";

}
