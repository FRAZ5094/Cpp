#include <iostream>

using namespace std;

int main()
{

    int counter = 7;
    cout << counter++ << endl; //prints before the counter is incremented
    cout << ++counter << endl; //intrements the variable then prints it

    cout << counter-- << endl;
    cout << --counter << endl;

    system("clear");

    return 0;
}
