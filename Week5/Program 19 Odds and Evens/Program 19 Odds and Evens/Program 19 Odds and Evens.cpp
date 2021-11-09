#include <iostream>
using namespace std;

int input;
int numOfOdd;
int oddTotal;
int numOfEven;
int evenTotal;

bool oddOrEven(int input)
{
	if (input % 2 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void outputResults(int numOfodd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "the number of odd numbers that was inputted was: " << numOfOdd << " and the total of the odd numbers were: " << oddTotal << endl;
	cout << "the number of even numbers that was inputted was: " << numOfEven << " and the total of the even numbers were: " << evenTotal << endl;
}

int main()
{
	cout << "intput 10 integers" << endl;
	for (int i= 0; i < 10; i++)
	{
		cin >> input;
		if (oddOrEven(input) == true)
		{
			evenTotal += input;
			numOfEven += 1;
		}
		else
		{
			oddTotal += input;
			numOfOdd += 1;
		}
	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}
