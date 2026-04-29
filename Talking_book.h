//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#ifndef TEMA_28_HW_TALKING_BOOK_H
#define TEMA_28_HW_TALKING_BOOK_H
#include "Book.h"
#include "Voice_recoding.h"


class Talking_book: public Book, public Voice_recoding {
protected:
    int Tapes;

public:
    Talking_book();
    Talking_book(string author, string edition, string pubDate, long isbn, string speaker, int duration, string recoding_date, int Tapes);

    void setTapes(int Tapes);

    int getTapes() const;

    void showInfo() const;
};


#endif //TEMA_28_HW_TALKING_BOOK_H
