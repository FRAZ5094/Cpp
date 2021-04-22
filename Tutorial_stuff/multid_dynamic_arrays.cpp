#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "rows,cols: ";
    cin >> rows >> cols;

    int **table = new int *[rows]; //for 2d array

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i]; //dealocatting all the columns of the array
    }
    delete[] table;
    table = NULL;

    return 0;
}