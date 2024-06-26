#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Book.h"
using namespace std;


class Library
{
private:
    vector<Book> books;
    bool isDuplicate(const char* pubID) const;


public:
    Book* findBook(const char* pubID);
    bool addBook(const char* pubID, const char* title, const char* author);
    bool editBook(const char* pubID, const char* newTitle, const char* newAuthor);
    bool deleteBook(const char* pubID);
    bool addSubscriberToBook(const char* pubID, const char* subscriber);
    bool removeSubscriberFromBook(const char* pubID, const char* subscriber);
    void displayAllBooks() const;
};

#endif
