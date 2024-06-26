#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area()
    {
        return (3.142) * radius * radius;
    }
    double circumference()
    {
        return 2 * (3.142) * radius;
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
    Circle c(12.0);
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;
    return 0;
}