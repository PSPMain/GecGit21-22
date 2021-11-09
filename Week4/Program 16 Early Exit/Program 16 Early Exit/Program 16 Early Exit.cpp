#include <iostream>
using namespace std;

int playeLife = 100;
int damage;

int main()
{
	cout << "the players life is : " << playeLife << endl;
	for(int i=0;i<10;i++)
	{
		cout << "Question " <<(i+1)<< " How much damage should we deal to the player: " << endl;
		cin >> damage;
		playeLife -= damage;
		cout << "the players health is now: " << playeLife << endl;
	}
	if (playeLife <= 0)
	{
		cout << "Early end. Player Died!" << endl;
	}
	else
	{
		cout << "all questions asked. Player survived!" << endl;
	}
}
