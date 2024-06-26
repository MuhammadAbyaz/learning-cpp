#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;
        if (a == b)
            return a;
        if (a > b)
            return gcd(a - b, b);
        return gcd(a, b - a);
    }

public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}
    void simplifyFraction()
    {
        int greatestDivisor = gcd(numerator, denominator);
        cout << numerator / greatestDivisor << "/" << denominator / greatestDivisor;
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
    Fraction f(24, 36);
    f.simplifyFraction();
    return 0;
}