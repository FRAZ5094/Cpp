#include <iostream>

using namespace std;

int main()
{
    /*
    cout << (int)'a' << endl; //casting a to int
    cout << int('a') << endl; //converting a to int
    cout << int('A') << endl; //different because Capital
    cout << char(65) << endl; //A in ascii
    */

    char c1, c2, c3, c4, c5;

    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    return 0;
}
