#include <iostream>
#include <algorithm>
using namespace std;

int numbers[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "enter a number: " << endl;
		cin >> numbers[i];
	}
	cout<<endl;
	sort(numbers,numbers+10);
	for (int j = 0; j < 10; j++)
	{
		cout << numbers[j] << endl;
	}
}
