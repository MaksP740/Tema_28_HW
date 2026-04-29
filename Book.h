//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#ifndef TEMA_28_HW_BOOK_H
#define TEMA_28_HW_BOOK_H

#include <iostream>
#include <string>
using namespace std;


class Book {
protected:
    string author;
    string edition;
    string pubDate;
    long isbn;

public:
    Book();
    Book(string author, string edition, string pubDate, long isbn);

    string getAuthor() const;
    string getEdition() const;
    string getPubDate() const;
    long getIsbn() const;

    void setAuthor(string author);
    void setEdition(string edition);
    void setPubDate(string pubDate);
    void setIsbn(long isbn);

    void showInfo() const;

};


#endif //TEMA_28_HW_BOOK_H
