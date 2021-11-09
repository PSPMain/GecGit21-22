#include <iostream>
using namespace std;
int number1;
int number2;
int total;
float mean;
int choice=1;
int main()
{

	cout << "Enter 2 seperate numbers: " << endl;
	cin >> number1;
	cin >> number2;
	total = number1 + number2;
	cout << total << endl;
	int i = 2;
	while (choice != 0)
	{
		cout << "enter another number: " << endl;
		cin >> choice;
		i++;
		total += choice;
		mean = total / i;
		cout << "the total is : " << total << endl;
		cout << "the mean is : " << mean << endl;
	}

}