#include <iostream>
#include <algorithm>
using namespace std;


char cards[10] = { 'A','D','B','A','C','C','D','B','E','E' };
//cards[10][1]={'1','2','3','4','5','6','7','8','9','10'}
bool cardsFound[10] = { false };
int attempts;


void gameBoard()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "[" << i + 1 << "]";
	}
	cout << endl;
	for (int j = 5; j < 10; j++)
	{
		cout << "[" << j + 1 << "]";
	}
}

void GameBoard2(char choice1, char choice2)
{
	cout << cards[choice1] << endl;
	/*if (choice1 < 6)
	{
		for (int i = 0; i < choice1; i++)
		{
			cout << "[" << i + 1 << "]";
		}
		cout << "[" << cards[choice1] << "]";
		
	}*/
	
}


int main()
{
	int score;
	bool playing = true;
	while (playing == true)
	{
		gameBoard();
		char choice1=0;
		char choice2=0;
		cout << "pick a card: " << endl;
		cin >> choice1;
		system("cls");
		GameBoard2(choice1, choice2);
		cin >> choice2;
	}
	
}