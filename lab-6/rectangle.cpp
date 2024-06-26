#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return 2 * (length + width);
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
    Rectangle r(12.0, 12.0);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter" << r.perimeter() << endl;
    return 0;
}