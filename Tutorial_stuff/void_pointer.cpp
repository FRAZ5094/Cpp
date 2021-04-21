#include <iostream>

using namespace std;

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}
void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl; //casted to int then * to get value at address
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}
int main()
{

    int number = 5;
    char letter = 'a';
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}