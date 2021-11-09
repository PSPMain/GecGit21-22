#include <iostream>
#include <algorithm>

using namespace std;

int numbers[5];

void print(int numbers[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "enter a number: " << endl;
		cin >> numbers[i];
	}
	sort(numbers, numbers + 5);
	cout << "your numbers sorted smallest to largest: " << endl;
	print(numbers);
	cout << "your numbers largest to smallest" << endl;
	for (int j = 4; j > -1; j--)
	{
		cout << numbers[j]<<endl;
	}
	cout << "the largest number you've entered: " <<numbers[0]<<"the position of this number is: "<<0<< endl;
	
}
