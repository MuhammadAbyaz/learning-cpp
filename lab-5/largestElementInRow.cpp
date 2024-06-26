#include <iostream>
#include <vector>
using namespace std;
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
int main()
{
    intro();
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> max;
    for (int i = 0; i < 3; ++i)
    {
        int maxVal = 0;
        for (int j = 0; j < 3; ++j)
        {
            maxVal = matrix[i][j] > maxVal ? matrix[i][j] : maxVal;
        }
        max.push_back(maxVal);
    }
    cout << "Max of each row" << endl;
    for (auto &m : max)
    {
        cout << m << endl;
    }
    return 0;
}