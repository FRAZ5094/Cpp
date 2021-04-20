#include <iostream>
#include <climits>

using namespace std;

int main()
{

    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 234562323323; //double is double the size of int

    cout << "Size of int is " << sizeof(int) << " bytes\n";

    cout << "Int min value is " << INT_MIN << endl; //-2147483648

    cout << "Int max value is " << INT_MAX << endl; //2147483647 is smaller because has to include zero

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " btyes\n"; //only positive integer

    cout << "UInt max value is " << UINT_MAX << endl;

    cout << "Size of bool is " << sizeof(bool) << " btyes\n";

    cout << "Size of char is " << sizeof(char) << " btyes\n";

    cout << "Size of float is  " << sizeof(float) << " btyes\n";

    cout << "Size of double is " << sizeof(double) << " btyes\n";

    int intMax = INT_MAX;

    cout << intMax << endl;
    cout << "overflows to:" << endl;
    cout << intMax + 1 << endl;

    return 0;
}