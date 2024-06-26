#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    virtual double fuelEfficiency() = 0;
};
class Car : public Vehicle
{
private:
    double kilometersDriven;
    double fuelConsumed;

public:
    Car(double k, double f) : kilometersDriven(k), fuelConsumed(f) {}
    double fuelEfficiency() override
    {
        return fuelConsumed / kilometersDriven;
    }
};
class Truck : public Vehicle
{
private:
    double kilometersDriven;
    double fuelConsumed;

public:
    Truck(double k, double f) : kilometersDriven(k), fuelConsumed(f) {}
    double fuelEfficiency() override
    {
        return fuelConsumed / kilometersDriven;
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
    Car c(100000, 1000);
    Truck t(200000, 10000);
    cout << "Efficiency of Car: " << c.fuelEfficiency() << endl;
    cout << "Efficiency of Truck: " << t.fuelEfficiency() << endl;
    return 0;
}