#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book
{
    string title;
    string author;
    int ISBN;

public:
    Book(string t, string a, int isbn) : title(t), author(a), ISBN(isbn) {}
    int getISBN()
    {
        return ISBN;
    }
    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};
class Library
{
    vector<Book> books;

public:
    Library() {}
    void addBook(Book b)
    {
        books.push_back(b);
    }
    void displayBookDetail(int isbn)
    {
        for (auto &b : books)
        {
            if (b.getISBN() == isbn)
            {
                b.displayDetails();
                return;
            }
        }
        cout << "No Book found" << endl;
    }
};
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
int main()
{
    intro();
    Library l;
    Book b{"7 habits", "Stephan", 123};
    l.addBook(b);
    l.displayBookDetail(123);
}