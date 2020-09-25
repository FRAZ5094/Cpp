#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	int my_array[2];
	my_array[0] = 0;
	my_array[1] = 1;

	int my_array2[3] = { 1,1,2 };
	int my_array3[3]{ 4 }; //dont need to use the = for this, values other than at i=3 will be 0
	int my_array4[]{ 7,7,7 };//dont need to say size of array, it figures it out
	int my_array5[4]{};//creates an array of length 4 with 0's in it

	cout << my_array5[0] << endl;
	*/

	/*int array_2d[2][3];
	array_2d[0][0] = 1;
	array_2d[1][2] = 6;*/

	/*
	char a[] = "asdf";
	char b[5] = "asdf";//char arrays need to leave room for \o (null character) at end, so length=5 even though only 4 characters
	//char c[]{ 'a','b' };//weird behaviour because no \0 at end of char array
	char c[]{ 'a','b','\0' };//must put \0 at end
	char d[]{ 'a','b','\0','c','\0' };

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	*/

	cout << sizeof(string) << endl;//string are way longer, but have more functionality
	cout << sizeof(char) << endl;

	string ham = "Ham";
	string sandwich = "Sandwich";

	ham.swap(sandwich); //sets ham to the value of sandwich, and vice versa
	cout << ham << endl;
	cout << sandwich << endl;
	cout << ham.size() << endl;//basically lenght of ham
	cout << ham.find("a") << endl;
	cout << ham[1] << endl;
	string x = ham + sandwich;
	sandwich += ham;

	cout << sandwich << endl;

	string y;
	getline(cin, y);

	return 0;
}
