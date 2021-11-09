#include <iostream>
using namespace std;

int choice;
int main()
{
	cout << "type in a number between 1 and 10: " <<endl;
	cin >> choice;
	for (int i= 0; i < (choice+1); i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

