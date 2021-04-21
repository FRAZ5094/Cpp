#include <iostream>

using namespace std;

void introduction(string name = "No name specified")
{
    cout << "My name is: " << name << endl;
}

int main()
{

    introduction("Fraser");
    introduction();
    return 0;
}