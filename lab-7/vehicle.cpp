#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    void move()
    {
        cout << "Vehicle is moving";
    }
};
class Car : public Vehicle
{
public:
    void move()
    {
        cout << "Car is moving";
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
    Car c;
    c.move();
    return 0;
}