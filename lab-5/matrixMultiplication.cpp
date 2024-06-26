#include <iostream>
#include <vector>

using namespace std;
void intro()
{
    cout << "Name: Muhammad Abyaz Khalid" << endl;
    cout << "Roll Number: SE-23053" << endl;
}
void multiplyMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2, vector<vector<int>> &result)
{
    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();

    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (auto &row : matrix)
    {
        for (auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main()
{
    intro();
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    vector<vector<int>> mat1(rows1, vector<int>(cols1));

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    vector<vector<int>> mat2(rows2, vector<int>(cols2));

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows2; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            cin >> mat2[i][j];
        }
    }

    if (cols1 != rows2)
    {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 0;
    }

    vector<vector<int>> result(rows1, vector<int>(cols2));

    multiplyMatrices(mat1, mat2, result);

    cout << "Result of matrix multiplication:" << endl;
    printMatrix(result);

    return 0;
}
