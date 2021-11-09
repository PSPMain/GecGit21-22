#include <iostream>
using namespace std;

int playerHealth=1000;
int enemyHealth = 2000;
bool playing = true;
int choice;

void attackChoice(int choice)
{
	const int sword_damage = 300;
	const int magic_damage = 650;
	const int axe_damage = 450;
	const int troll_sword = 350;
	const int troll_magic = 50;
	const int troll_axe = 100;
	if (choice == 1)
	{
		enemyHealth -= sword_damage;
		playerHealth -= troll_sword;
		cout << "you have hit the troll" << endl;
		cout << "the troll has hit you" << endl;
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "your currnt health is: " << playerHealth << " and the enemies current health is: " << enemyHealth << endl;
	}
	else if (choice == 2)
	{
		enemyHealth -= magic_damage;
		playerHealth -= troll_magic;
		cout << "you have hit the troll" << endl;
		cout << "the troll has hit you" << endl;
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "your currnt health is: " << playerHealth << " and the enemies current health is: " << enemyHealth << endl;
	}
	else if (choice == 3)
	{
		enemyHealth -= axe_damage;
		playerHealth -= troll_axe;
		cout << "you have hit the troll" << endl;
		cout << "the troll has hit you" << endl;
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		else if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "your currnt health is: " << playerHealth << " and the enemies current health is: " << enemyHealth << endl;
	}
	else
	{
		cout << "this was not one of the optioins!" << endl;
	}
}

bool playState()
{
	char playAgain;
	if (enemyHealth <= 0)
	{
		cout << "YOU HAVE WON! YOU KILLED THE TROLL!" << endl;
		cout << "want to play again? y/n: " << endl;
		cin >> playAgain;
		if (playAgain=='y')
		{
			enemyHealth = 2000;
			playerHealth = 1000;
			return playing=true;
		}
		else
		{
			return playing = false;

		}
	}
	if (playerHealth <= 0)
	{
		cout << "you have been killed by the troll, big sad" << endl;
		cout << "want to play again? y/n: " << endl;
		cin >> playAgain;
		if (playAgain == 'y')
		{
			enemyHealth = 2000;
			playerHealth = 1000;
			return playing=true;
		}
		else
		{
			return playing=false;

		}
	}
	return false;
}

int main()
{
	while (playing == true)
	{
		cout << "you have met a troll and have 3 options of attack" << endl;
		while (playing == true)
		{
			cout << "1. use sword, 2. use magic 3. use axe" << endl;
			cout << "choices will have different affects" << endl;
			cin >> choice;


			attackChoice(choice);

			playState();
		}
	}
	return 0;
}
 
