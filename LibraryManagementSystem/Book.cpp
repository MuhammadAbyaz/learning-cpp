#include <cstring>
#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(const char* pubID, const char* t, const char* a)
{
    strcpy_s(publicationID, 20, pubID);
    strcpy_s(title, 100, t);
    strcpy_s(author,100, a);
}

const char* Book::getPublicationID() const {
    return publicationID;
}

void Book::editDetails(const char* newTitle, const char* newAuthor) {
    strcpy_s(title, 100, newTitle);
    strcpy_s(author, 100, newAuthor);
}

void Book::addSubscriber(const char* subscriber) {
    char* sub = new char[strlen(subscriber) + 1];
    strcpy_s(sub, strlen(subscriber) + 1, subscriber);
    patronSubscribers.push_back(sub);
}

void Book::removeSubscriber(const char* subscriber) {
    for (auto it = patronSubscribers.begin(); it != patronSubscribers.end(); ++it) {
        if (strcmp(*it, subscriber) == 0) {
            delete[] * it; 
            patronSubscribers.erase(it);
            break;
        }
    }
}

void Book::displayBook() const {
    cout << "Publication ID: " << publicationID << "\n";
    cout << "Title: " << title << "\n";
    cout << "Author: " << author << "\n";
    cout << "Patron Subscribers: ";
    for (auto& sub : patronSubscribers) {
        cout << sub << "\t";
    }
    cout << "\n";
}

Book::~Book()
{
    for (auto& sub : patronSubscribers) {
        delete[] sub;
    }
}