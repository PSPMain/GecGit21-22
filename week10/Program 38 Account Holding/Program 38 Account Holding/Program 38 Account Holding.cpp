#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct person
{
	string name;
	int accountnumeber;
	double balance;
};

int main()
{
	person* account1 = new person();
	person* account2 = new person();
	bool loop1 = true;
	bool loop2 = true;
	int userChoice;
	char moreDeets;
	ifstream inFile("File.txt");
	ofstream outFile("File.txt");
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
			while (loop2)
			{
				outFile.open("File.txt");
				if (!outFile.is_open())
				{
					cout << "your file didnt open" << endl;
				}
				if (outFile.is_open())
				{
					cout << "enter the name: " << endl;
					cin >> account1->name;
					cout << "enter the account number: " << endl;
					cin >> account1->accountnumeber;
					cout << "enter the account balance: " << endl;
					cin >> account1->balance;
					outFile << account1->name << endl;
					outFile << account1->accountnumeber << endl;
					outFile << account1->balance << endl;
					cout << "do you want to enter more details" << endl;
					cin >> moreDeets;
					if (moreDeets=='no')
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
				while (loop2)
				{
					inFile >> account2->name;
					inFile >> account2->accountnumeber;
					inFile >> account2->balance;
					cout << account2->name << endl;
					cout << account2->accountnumeber << endl;
					cout << account2->balance << endl;
				}
			}
			inFile.close();
		}
		else if (userChoice == 3)
		{
			loop2 = true;
			inFile.open("File.txt");
			if (inFile.is_open())
			{
				if(account1)
		}
	}
}
