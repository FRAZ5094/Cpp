#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    cout << &n << endl; //address of n
    int *ptr = &n;      //declare pointer, must be same type as variable it is pointing to
    cout << ptr << endl;
    cout << *ptr << endl; //gets value at address ptr using *
    *ptr = 10;            //changing the value at address ptr
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int *ptr2 = &v; //need to give a pointer an address when you make it
    *ptr2 = 7;
    cout << "v=" << v << endl;

    return 0;
}