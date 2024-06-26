#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int privateVar = 2;

protected:
    int protectedVar = 1;

public:
    int publicVar = 0;
};

class Derived : public Base
{
public:
    void publicFun()
    {
        cout << "Public: " << publicVar << endl;
    }
    // void privateFun()
    // {
    //     // Can not access private variable
    //     cout << privateVar;
    // }
    void protectedFun()
    {
        cout << "Protected: " << protectedVar << endl;
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
    Derived d;
    d.publicFun();
    d.protectedFun();
    // d.privateFun();
    return 0;
}