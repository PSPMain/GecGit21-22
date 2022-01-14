#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";
	cout << "you have picked up a wizards staff" << endl;
	cout << "1. keep the staff and swap it for the dagger" << endl;
	cout << "2. leave the staff" << endl;
	int answer;
	cin >> answer;
	if (answer == 1)
	{
		inventory[3] = "wizard staff";
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << inventory[i] << endl;
		}
	}
	else if (answer == 2)
	{
		cout << "you have left behind the wizard staff" << endl;
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cout << inventory[i] << endl;
		}
	}
}
