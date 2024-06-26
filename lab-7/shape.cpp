#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing Shape";
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};
class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Square" << endl;
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
    Circle c;
    Square s;
    c.draw();
    s.draw();
    return 0;
}