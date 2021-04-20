#include <iostream>

using namespace std;

int main()
{

    int hostUserNum, guestUserNum;

    cout << "Host: ";
    cin >> hostUserNum;
    system("clear");
    cout << "Guess: ";
    cin >> guestUserNum;

    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";
    //condition? true : false

    return 0;

    //3:01:03
}