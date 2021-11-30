#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string prototype(string name)
{
	srand(time(NULL));
	int num = rand();
	string rand;
	rand = to_string(num);
	name += rand;
	return name;
}

int main()
{
	cout << "enter a username" << endl;
	string name;
	cin >> name;
	cout << "this name is taken" << endl;
	cout << "your new username is " << prototype(name) << endl;
}
