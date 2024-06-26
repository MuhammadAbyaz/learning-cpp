#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
};
class Student : public Person
{
private:
    int studentID;

public:
    Student(string n, int a, int id) : Person(n, a)
    {
        studentID = id;
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
    return 0;
}