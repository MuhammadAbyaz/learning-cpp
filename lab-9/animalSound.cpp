#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};
class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "I am a dog, I woof" << endl;
    }
};
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "I am a cat, I meow" << endl;
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
    Cat c;
    Dog d;
    d.makeSound();
    c.makeSound();
    return 0;
}