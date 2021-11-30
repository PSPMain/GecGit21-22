#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2)
{
	int num1 = 0;
	int num2 = 0;
	cout << "please enter to numbers" << endl;
	cin >> num1;
	cin >> num2;
	*n1 = num1;
	*n2 = num2;

}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout <<"num1 "<<integer1 << endl;
	cout <<"num1 address "<< &integer1 << endl;
	cout <<"num2 "<< integer2 << endl;
	cout <<"num2 address "<< &integer2 << endl;
	cout << "pointer num "<<pointer << endl;
	cout <<"dereferenced pointer num "<< *pointer << endl;
	cout <<"pnum address "<< &pointer << endl;

}

int main()
{
	int numOne;
	int numTwo;
	int* pNum = &numOne;
	inputDetails(&numOne, &numTwo);
	outputDetails(numOne, numTwo, pNum);
	pNum = &numTwo;
	outputDetails(numOne, numTwo, pNum);
}
