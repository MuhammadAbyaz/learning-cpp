#include <iostream>
using namespace std;
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
void displayMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    intro();
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int res[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            res[i][j] = matrix[j][i];
        }
    }
    displayMatrix(res);
    return 0;
}