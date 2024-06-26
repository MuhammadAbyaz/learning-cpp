#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
    string color;

public:
    Shape(string c) : color(c) {}
    virtual double area() = 0;
    virtual void display() = 0;
};
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(string c, double w, double h) : Shape(c)
    {
        width = w;
        height = h;
    }
    double area() override
    {
        return width * height;
    }
    void display() override
    {
        cout << "Color: " << color << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << area() << endl;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c)
    {
        radius = r;
    }
    double area() override
    {
        return (3.142) * radius * radius;
    }
    void display() override
    {
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
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
    Rectangle r("Red", 12, 12);
    r.area();
    r.display();
    Circle c("Blue", 6);
    c.area();
    c.display();
    return 0;
}