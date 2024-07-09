#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    friend double calculateArea(Circle);
};
double calculateArea(Circle c)
{
    return 3.142 * c.radius * c.radius;
}
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
int main()
{
    intro();
    Circle c(12);
    cout << calculateArea(c) << endl;
    return 0;
}