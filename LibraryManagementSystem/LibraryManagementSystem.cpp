#include <iostream>
#include "Library.h"
#include <cstring>
#include "Book.h"

int main() {
    Library library;
    int choice;
    do {
        cout << "Menu:"<<endl;
        cout << "1. Add A New Book"<<endl;
        cout << "2. Edit Details of an Available Book"<<endl;
        cout << "3. Delete A Book"<<endl;
        cout << "4. Display All Books in the Library"<<endl;
        cout << "5. Add Subscriber to a Book"<<endl;
        cout << "6. Remove Subscriber from a Book"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        {
            char pubID[20], title[100], author[100];
            cout << "Enter Publication ID: ";
            cin >> pubID;
            cout << "Enter Title: ";
            cin.ignore();
            cin.getline(title, 100);
            cout << "Enter Author: ";
            cin.getline(author, 100);

            bool response = library.addBook(pubID, title, author);
            if (!response) {
                cout << "Book with this publication id already exists\n";
            }
            else {
                cout << "Successfullly added the book\n";
            }
            break;
        }

        case 2:
        {
            char pubID[20], newTitle[100], newAuthor[100];
            cout << "Enter Publication ID: ";
            cin >> pubID;
            cout << "Enter New Title: ";
            cin.ignore();
            cin.getline(newTitle, 100);
            cout << "Enter New Author: ";
            cin.getline(newAuthor, 100);


            bool response = library.editBook(pubID, newTitle, newAuthor);
            if (!response) {
                cout << "Failed to edit the book\n";
            }
            else {
                cout << "Book Details Updated!\n";
            }
            break;
        }

        case 3:
        {
            char pubID[20];
            cout << "Enter Publication ID of the book: ";
            cin >> pubID;

            bool response = library.deleteBook(pubID);
            if (!response) {
                cout << "Book not found\n";
            }
            else {
                cout << "Book Deleted Successfullly\n";
            }
            break;


        }
        case 4:
            library.displayAllBooks();
            break;

        case 5:
        {
            char pubID[20], subscriber[100];
            cout << "Enter Publication ID of the book: ";
            cin >> pubID;
            cout << "Enter Subscriber Name: ";
            cin.ignore();
            cin.getline(subscriber, 100);
            bool response = library.addSubscriberToBook(pubID, subscriber);
            if (response) {
                cout << "Subscriber added\n";
            }
            else {
                cout << "Book not found\n";
            }
            break;
        }

        case 6:
        {
            char pubID[20], subscriber[100];
            cout << "Enter Publication ID of the book: ";
            cin >> pubID;
            cout << "Enter Subscriber Name: ";
            cin.ignore();
            cin.getline(subscriber, 100);
            bool response = library.removeSubscriberFromBook(pubID, subscriber);
            if (response) {
                cout << "Subscriber removed\n";
            }
            else {
                cout << "Book not found\n";
            }
            break;
        }
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
