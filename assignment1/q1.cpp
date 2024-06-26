using namespace std;
#include "ComboLock.h"
#include <iostream>
int main()
{
    int s1, s2, s3;
    do
    {
        cout << "Enter three numbers between 0 and 39";
        cin >> s1 >> s2 >> s3;

    } while ((s1 < 0 || s1 > 39) || (s2 < 0 || s2 > 39) || (s3 < 0 || s3 > 39));
    ComboLock comboLock(s1, s2, s3);
    cout << "Your combination has been set";
    while (true)
    {
        int choice;
        cout << "Enter 1 to turn right: " << endl;
        cout << "Enter 2 to turn left: " << endl;
        cout << "Enter 3 to reset: " << endl;
        cout << "Enter 4 to open: " << endl;
        cout << "Enter 5 to exit : " << endl;
        cin >> choice;

        if (choice == 2)
        {
            int ticks;
            do
            {
                cout << "Enter positive number of ticks to turn right: ";
                cin >> ticks;
            } while (ticks < 0);

            comboLock.turnRight(ticks);
            cout << "Turned right by " << ticks << " ticks" << endl;
        }
        else if (choice == 2)
        {
            int ticks;
            do
            {
                cout << "Enter positive number of ticks to turn right: ";
                cin >> ticks;
            } while (ticks < 0);

            comboLock.turnLeft(ticks);
            cout << "Turned left by " << ticks << " ticks" << endl;
        }

        else if (choice == 3)
        {
            comboLock.reset();
            cout << "Successfully reset the dial to 0" << endl;
        }

        else if (choice == 4)
        {
            cout << "Attempting to open...." << endl;
            if (comboLock.open())
            {
                cout << "Successfully opened the lock." << endl;
                break;
            }
            else
            {
                cout << "Failed to open the lock. Invalid combination" << endl;
            }
        }

        else if (choice == 5)
        {
            cout << "Exiting...";
            break;
        }

        else
        {
            cout << "Invalid input. Try again";
        }
    }
}