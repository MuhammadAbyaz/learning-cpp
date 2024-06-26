#include <iostream>
#include "ComboLock.h"

ComboLock::ComboLock(int s1, int s2, int s3)
{
    secret1 = s1;
    secret2 = s2;
    secret3 = s3;
    dial = 0;
}
void ComboLock::reset()
{
    dialHistory.clear();
    dial = 0;
}

void ComboLock::turnRight(int ticks)
{
    dial -= ticks;
    dial += 40;
    cout << dial << endl;
    dialHistory.push_back(to_string(dial) + "r");
}

void ComboLock::turnLeft(int ticks)
{
    dial += ticks;
    dial %= 40;
    dial = abs(dial);
    cout << dial << endl;
    dialHistory.push_back(to_string(dial) + "l");
}

bool ComboLock::open()
{

    if (dialHistory[0] == (to_string(secret1) + "r") && dialHistory[1] == (to_string(secret2) + "l") && dialHistory[2] == (to_string(secret3) + "r"))
    {
        return true;
    }
    else
    {
        return false;
    }
}