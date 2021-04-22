#include <iostream>

using namespace std;

void myFunction()
{
    int *ptr = new int[5];
    ptr[2] = 10;
    cout << "Hi I am = " << ptr[2];
}

int main()
{

    int savedMoney[5] = {100,
                         200,
                         300,
                         400,
                         500};

    int total = 0;
    for (int i = 0; i <= 5; i++)
    {
        total += savedMoney[i];
    }

    cout << "Total " << total << endl;

    myFunction();

    return 0;
}