#include <iostream>
#include <string>

using namespace std;

int main() {
	/*
	if (1) cout << "ham";
	if (-1) cout << " sandwich";//truthy values (all non 0 values are evaluated as true)
	if ('a') cout << " with";//evaluates to true

	if (5 > 4) {
		;//same as pass in python
	}
	*/

	/*
	if (4 > 5) {
		cout << "You'll never see this.";
	}
	else {
		cout << "Pork belly is yummy!\n";
	}

	if (0) {
		cout << "nope";
	}
	else if (1) {
		cout << "Witches are the best in sand";
	}
	*/

	/*
	//in the form [evaluated expression] ? [runs if true] : [runs if false]
	5 > 4 ? cout << "True" : cout << "False";

	int x = 5 > 4 ? 1 : 2;//can do this with assigning variables aswell
	cout << x << endl;
	*/

	switch (1) {
	case 1:
	case 2://checks for case 1 and 2
		cout << "at 1" << endl;
		cout << "at 2" << endl;
		//cant assign a value in a if/switch satement
		break;
	case 3: 
		cout << "at 3" << endl;
		break;
	default:
		cout << "if no other conditions are met" << endl;
	}


	string z;
	getline(cin, z);
	return 0;
}