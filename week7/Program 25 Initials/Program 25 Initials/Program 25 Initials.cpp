#include <iostream>
using namespace std;

int main()
{
	cout << "enter your first initial, then ur middle initial and then ur surname initial: " << endl;
	char initials[7];
	for (int i = 0; i < 2; i++)
	{
		cin >> initials[i];
		cout << initials[i] << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> initials[i + 2];
		cout << initials[i + 2];
	}


}
