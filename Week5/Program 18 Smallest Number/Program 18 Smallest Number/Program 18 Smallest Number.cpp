#include <iostream>
using namespace std;

int a;
int b;

int smallestNumber(int a, int b)
{
	if (a < b)
	{
		cout << a << " is smaller than " << b << endl;
		return a;
	}
	else if (a>b)
	{
		cout << b << " is smaller than " << a << endl;
		return b;
	}
	else
	{
		cout <<"both numbers are of the same value!" << endl;
	}
}

int main()
{
	cout << "input two integers: " << endl;
	cin >> a;
	cin >> b;
	smallestNumber(a, b);
}
