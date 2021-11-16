#include <iostream>
using namespace std;

int main()
{
	cout << "enter your first initial, then ur middle initial and then ur surname initial: " << endl;
	char initials[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> initials[i];
		cout << initials[i] << endl;
	}


}
