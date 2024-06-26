#ifndef COMBOLOCK_H
#define COMBOLOCK_H

#include <string>
#include <vector>
using namespace std;
class ComboLock
{
private:
    int secret1;
    int secret2;
    int secret3;

public:
    vector<string> dialHistory;
    int dial;
    ComboLock(int s1, int s2, int s3);
    void reset();
    void turnLeft(int turns);
    void turnRight(int turns);
    bool open();
};

#endif