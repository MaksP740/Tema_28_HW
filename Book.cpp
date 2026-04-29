//
// Created by MacBook_Air_Maks on 29.04.2026.
//

#include "Book.h"

Book::Book() {
    author = "Невідомо";
    edition = "Невідомо";
    pubDate = "Невідомо";
    isbn = 0;
}

Book::Book(string author, string edition, string pubDate, long isbn) {
    this->author = author;
    this->edition = edition;
    this->pubDate = pubDate;
    this->isbn = isbn;
}

string Book::getAuthor() const {
    return author;
}

string Book::getEdition() const {
    return edition;
}

string Book::getPubDate() const {
    return pubDate;
}

long Book::getIsbn() const {
    return isbn;
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setEdition(string edition) {
    this->edition = edition;
}

void Book::setPubDate(string pubDate) {
    this->pubDate = pubDate;
}

void Book::setIsbn(long isbn) {
    this->isbn = isbn;
}

void Book::showInfo() const {

    cout << "\n=====================================\n";
    cout << "               КНИГА\n";
    cout << "=====================================\n";

    cout << "Автор              : " << author << endl;
    cout << "Видання            : " << edition << endl;
    cout << "Дата публікації    : " << pubDate << endl;
    cout << "Штрих-код          : " << isbn << endl;

    cout << "=====================================\n";
}
