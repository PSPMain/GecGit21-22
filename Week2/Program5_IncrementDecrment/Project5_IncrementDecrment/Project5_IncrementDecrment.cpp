#include <iostream>
using namespace std;

int main()
{
	//initialise num to 1
	int num = 1;

	cout << "num= " << num << endl;
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "num after = " << num << endl;

	//reset num to 1
	num = 1;

	cout << "num= " << num << endl;
	cout << "Inrement operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	//reset num to 1
	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement operator after num = " << --num << endl;
	cout << "num after = " << num << endl;

	//reset num to 1
	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator after num = " << num-- << endl;
	cout << "num after = " << num << endl;

	return 0;
}