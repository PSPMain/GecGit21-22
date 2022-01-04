#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct person
{
	string name;
	int accountnumeber=0;
	double balance=0.0;
};

int main()
{
	person account1;
	person account2;
	bool loop1 = true;
	bool loop2 = true;
	int userChoice=0;
	char moreDeets;
	ifstream inFile;
	ofstream outFile;
	while (loop1)
	{
		cout << "Please pick your choices:" << endl;
		cout << "1. Enter new details: " << endl;
		cout << "2. Display the contents of the file: " << endl;
		cout << "3. Display accounts that have a balance of over 10,000: " << endl;
		cout << "4. Exit the program: " << endl;
		cin >> userChoice;
		if (userChoice == 1)
		{
			outFile.open("File.txt", ios::app);
			while (loop2)
			{
				if (outFile.is_open())
				{
					cout << "enter the name: " << endl;
					cin >> account1.name;
					cout << "enter the account number: " << endl;
					cin >> account1.accountnumeber;
					cout << "enter the account balance: " << endl;
					cin >> account1.balance;
					outFile << account1.name << endl;
					outFile << account1.accountnumeber << endl;
					outFile << account1.balance << endl;
					cout << "do you want to enter more details: n/y" << endl;
					cin >> moreDeets;
					if (moreDeets == 'n')
					{
						loop2 = false;

					}

				}
			}
			outFile.close();
		}

		else if (userChoice == 2)
		{
			loop2 = true;
			inFile.open("File.txt");
			if (inFile.is_open())
			{
				string line;
				while (inFile >> account2.name)
				{
					inFile >> account2.accountnumeber;
					inFile >> account2.balance;
					cout << account2.name << endl;
					cout << account2.accountnumeber << endl;
					cout << account2.balance << endl;
				}
			}
			inFile.close();
		}


		else if (userChoice == 3)
		{
			loop2 = true;
			bool over = false;
			inFile.open("File.txt");
			if (inFile.is_open())
			{
				while (inFile >> account2.name)
				{
					
					inFile >> account2.accountnumeber;
					inFile >> account2.balance;
					if (account2.balance > 10000)
					{
						cout << account2.name << endl;
						cout << account2.accountnumeber << endl;
						cout << account2.balance << endl;
						over = true;
					}
					
				}
				if (over == false)
				{
					cout << "no accounts exist with a balance oer 10000" << endl;
				}

			}
		}
		else if(userChoice == 4)
		{
			return 0;
		}
		else
		{

		}
	}
}
