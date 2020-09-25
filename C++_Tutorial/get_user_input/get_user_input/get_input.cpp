#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	string x;
	cout << "please enter an int: ";
	cin >> x;
	cout << "thank you!" << endl;
	cin >> x;
	*/
	/*
	string y;
	cout << "Sandwich Type: ";
	getline(cin, y);
	cout << "Creating " << y;
	cout << " Sandwich" << endl;
	cout << "Press enter to exit...";
	getline(cin, y);
	*/
	/*char x, y;
	int max_num_char = 100;
	char stop_at = ' ';

	x = cin.get();
	cin.ignore(max_num_char, stop_at);
	y = cin.get();
	cin.ignore(max_num_char, '\n');
	cout << x << y << endl;

	string z;
	getline(cin, z);*/
	//cout << 5 + 4 << endl;
	//cout << 5 - 4 << endl;
	//cout << 5 * 4 << endl;
	//cout << 5 / 4.0 << endl; //need to use .0 to make it a float
	//cout << 5 % 4 << endl;
	//int x = 5;
	//x += 8;
	//cout << x << endl;
	/*
	int wounds = 0;

	wounds++;//+=1
	++wounds;

	cout << wounds << endl;
	wounds--;//-=1
	cout << wounds << endl;
	*/


	cout << !true << endl;
	cout << (5==4) << endl;
	cout << (5!=4) << endl;
	cout << (5<4) << endl;
	cout << (5>4) << endl;
	cout << (5 <= 4) << endl;
	cout << (5 >= 4) << endl;
	cout << (true && true) << endl;
	cout << (true || false) << endl;


	string y;
	getline(cin, y);

	return 0;
	

}