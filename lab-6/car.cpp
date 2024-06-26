#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}
    void showDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
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
    Car c("Ferrari", "SF90 Stradale", 2024);
    c.showDetails();
    return 0;
}