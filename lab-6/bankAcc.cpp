#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accNo;
    string accHolder;
    double balance;

public:
    BankAccount(string aN, string aH, double b) : accNo(aN), accHolder(aH), balance(b) {}
    void deposit(double amount)
    {
        balance += amount;
        cout << "You have deposited " << amount << ". Your current balance is: " << balance << endl;
    }
    void withdraw(double amount)
    {

        balance -= amount;
        cout << "You have withdraw " << amount << ". Your current balance is: " << balance << endl;
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
    BankAccount b("Ae212902-12332c-21212", "Abyaz", 300000);
    b.deposit(50000);
    b.withdraw(100000);
    return 0;
}