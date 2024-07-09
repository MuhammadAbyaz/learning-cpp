#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    friend double calculatePerimeter(Rectangle);
};
double calculatePerimeter(Rectangle r)
{
    return 2 * (r.length + r.width);
}
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
int main()
{
    intro();
    Rectangle r(12, 12);
    cout << calculatePerimeter(r) << endl;
    return 0;
}