#include <string>
#include <iostream>
using namespace std;

int main()
{
	int count;
	cout << "Type which item you wish to keep: Staff or Knife" << endl;
	string answer;
	getline(cin, answer);
	string inventory[3] = { "Sword" };
	inventory[1] = answer;
	cout << "your inventory holds:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "Which item you wish to keep: Healing potion or Fire Spell" << endl; 
	getline(cin, answer);
	inventory[2] = answer;
	cout << "your inventory holds:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << inventory[i] << endl;
	}
	int inv = 0;
	while (inv < 3)
	{
		for (int i = 0; i < 3; i++)
		{
			if (inventory[i] != "")
			{
				inv++;
			}
		}
	}
	cout << "inventory is full!" << endl;
	cout << "you have found a magic ring what would yo like to replace in your inventory?" << endl;
	cout << "choices:" << endl;
	cout << "1. " << inventory[0] << endl;
	cout << "2. " << inventory[1] << endl;
	cout << "3. " << inventory[2] << endl;
	int ans;
	cin >> ans;
	inventory[ans-1].replace(0, 10, "magic ring");
	cout << "your inventory holds:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "you have been robbed!!!" << endl;
	for (int i = 0; i < 3; i++)
	{
		inventory[i] = "";
	}
	bool empty = false;
	if (empty == false)
	{
		for (int i = 0; i < 3; i++)
		{
			
			if (inventory[i] == "")
			{
				count++;
			}
			if (count == 3)
			{
				empty = true;
			}
		}
	}
	else
	{
	cout << "your inventory holds:" << endl;
	cout << "Empty!" << endl;
	}
}
