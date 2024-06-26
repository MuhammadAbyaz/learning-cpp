#include <iostream>
using namespace std;

void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
void makeTranspose(int matrix[3][3], int transpose[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
}
bool checkSymmetric(int matrix[3][3], int transpose[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] != transpose[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    intro();
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    makeTranspose(matrix, transpose);
    cout << (checkSymmetric(matrix, transpose) ? "The matrix is symmetric" : "The matrix is not symmetric");
    return 0;
}