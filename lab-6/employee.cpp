#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}
    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
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
    Employee e("Abyaz", 120000);
    e.showDetails();
    return 0;
}