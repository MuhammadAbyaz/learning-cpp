using namespace std;
#include "ComboLock.h"
#include <iostream>
int main()
{
    int s1, s2, s3;
    do
    {
        cout << "Enter three numbers between 0 and 39: "<<endl;
        cin >> s1 >> s2 >> s3;

    } while ((s1 < 0 || s1 > 39) || (s2 < 0 || s2 > 39) || (s3 < 0 || s3 > 39));
    ComboLock comboLock(s1, s2, s3);
    cout << "Your combination has been set!!" << endl;
    while (true)
    {
        int choice;
        cout << "1: Turn right: " << endl;
        cout << "2: Turn left: " << endl;
        cout << "3: Reset Dial: " << endl;
        cout << "4: Open Lock: " << endl;
        cout << "5: Exit : " << endl;
        cin >> choice;

        if (choice == 1)
        {
            int turns;
            do
            {
                cout << "Enter positive number of turns to turn right: ";
                cin >> turns;
            } while (turns < 0);

            comboLock.turnRight(turns);
            cout << "Turned right by " << turns << " ticks" << endl;
        }
        else if (choice == 2)
        {
            int turns;
            do
            {
                cout << "Enter positive number of ticks to turn left: ";
                cin >> turns;
            } while (turns < 0);

            comboLock.turnLeft(turns);
            cout << "Turned left by " << turns << " ticks" << endl;
        }

        else if (choice == 3)
        {
            comboLock.reset();
            cout << "Successfully reset the dial to 0" << endl;
        }

        else if (choice == 4)
        {
            cout << "Trying to open...." << endl;
            if (comboLock.open())
            {
                cout << "Lock open successfully." << endl;
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
