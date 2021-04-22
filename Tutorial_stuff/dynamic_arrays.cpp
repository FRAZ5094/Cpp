#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    //int myArray[size];

    int *myArray = new int[size]; //dynamic array, use when array length is not known before running program

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    delete[] myArray;
    myArray = NULL; //good practice because now the pointer is pointing to memory that we are not using anymore

    return 0;
}