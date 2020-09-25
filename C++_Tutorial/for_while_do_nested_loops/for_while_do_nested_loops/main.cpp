#include <iostream>
#include <string>

using namespace std;

int main() {

	int x = 5;
	/*
	while (x)//when x==0 it will stop, non zero's are truthy
		cout << x-- << endl;
	*/

	/*
	do {
		cout << x-- << endl;
		//always runs the code at least once
	} 
	while (x);
	*/

	/*
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	*/

	/*
	int i = 0;
	for (;;) {
		if (i == 5) {
			i++;//need to inc or will just get stuck at 5
			continue; //basically skips when i=5
		}
		cout << i++ << endl;
		if (i > 10) {
			break;
		}
	}
	*/

	for (int tens = 0; tens < 100; tens += 10) {
		cout << "TENS IS AT: " << tens << endl;
		for (int ones = 0; ones < 10; ones++) {
			cout << tens + ones << endl;
		}
	}

	string y;
	getline(cin, y);


	return 0;
}