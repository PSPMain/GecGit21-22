#include <string>
#include <iostream>
using namespace std;

int main()
{
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

}
