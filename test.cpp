#include <iostream>

using namespace std;

int main()
{

    string str = "Hello";

    for (int i = 1; i < str.length(); i++)
    {

        //cout << str[i] << endl;
    }

    cout << typeid(str[0]).name() << endl;
    cout << typeid("0").name() << endl;
    cout << typeid('0').name() << endl;

    return 0;
}