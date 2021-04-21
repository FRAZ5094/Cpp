#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 5, b = 7;
    cout << a << "-" << b << endl;
    Swap<int>(a, b);
    cout << a << "-" << b << endl;

    char c = 'c', d = 'd';

    cout << c << "-" << d << endl;
    Swap<char>(c, d); // dont have to declare which data type with <char> because its already known through the passed in variables
    cout << c << "-" << d << endl;

    return 0;
}