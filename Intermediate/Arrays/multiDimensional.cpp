#include <iostream>

using namespace std;

const int rows = 2;
const int cols = 3;

void printMatrix(int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << endl;
        }
    }
}

int main()
{
    int matrix[rows][cols] = {
        {10, 15, 20},
        {30, 35, 40}};

    printMatrix(matrix);

    return 0;
}