#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Date
{
private:
    unordered_map<string, int> monthMap = {{"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 11}};
    int month;
    int year;
    int day;

public:
    Date(int d, string m, int y) : day(d), month(monthMap[m]), year(y) {}
    void getDate()
    {
        cout << "Day: " << day << endl;
        cout << "Month: " << month << endl;
        cout << "Year: " << year << endl;
    }
};
class Book
{
private:
    string title;
    string author;
    Date publicationDate;

public:
    Book(string t, string a, int publicationYear, int publicationDay, string publicationMonth) : title(t), author(a), publicationDate(Date(publicationDay, publicationMonth, publicationYear)) {}
    void getPublicationDate()
    {
        publicationDate.getDate();
    }
};

int main()
{
    Book b("7 Habits", "Stephan R. Covey", 2018, 12, "Jan");
    b.getPublicationDate();
    return 0;
}