#include <iostream>
#include <string>
using namespace std;

/*
void print_Words(string a) {
	cout << a << endl;

}
void add_One(int* i) {
	(*i)++;//increments value at array address i
	*i++;//gets the address of i+1
}
void add_Two(int& j) {//using original value (using &), not a copy
	j += 2;
}

void increment_Array(double* arr, int size = 5) {
	for (int i = 0; i < size; i++) {
		arr[i]++;//changes values in the real array, not just a reference
	}
}
*/

int return_one() { return 1; }

int* AVOID_THIS() {
	int a = 2;
	return &a;
}//a will be destroyed once the function is done, so returned pointer is useless

int* AVOID_THIS_TOO() {
	int* b = new int[5];//stays in memory after function returns
	return b;//memory might shift about meaning that pointer might point to something else
	//causes memory leak if new int[5] has no reference to it, can't find it because don't know where it is 
}

int& AVOID_THIS_ALSO() {
	int c = 4;
	return c;
	//c destroyed after return
}

//BASICALLY DONT RETURN POINTERS OR REFERENCES

int main() {
	/*
	print_Words("Ham Sandwich!");

	int x = 5;
	add_One(&x);
	cout << x << endl;

	add_Two(x);
	cout << x << endl;

	double super_array[]{ 1,2,3,4.5,77.7 };
	increment_Array(super_array, 5);
	for (int i = 0; i < 5; i++) {
		cout << super_array[i] << endl;
	}
	*/

	int* x, *y, z;
	x = AVOID_THIS();
	cout << *x << endl;
	y = AVOID_THIS_TOO;
	cout << *y << endl;
	z = AVOID_THIS_ALSO();
	cout << z << endl;
	cout << endl;

	char c[] = "Ham Sandwich";
	z = 15;
	cout << *x << endl;
	cout << *y << endl;
	cout << z << endl;


	string s;
	getline(cin, s);
	return 0;
}