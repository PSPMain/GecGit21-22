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
	/*sort(numbers, numbers + 5);
	cout << "your numbers sorted smallest to largest: " << endl;
	print(numbers);*/
	sort(numbers +5, numbers);
	cout << "your numbers largest to smallest" << endl;
	print(numbers);
	/*cout << "the largest number you've entered: " <<numbers[0]<< endl;*/
}
