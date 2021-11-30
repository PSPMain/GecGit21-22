#include <iostream>
#include<string>
using namespace	std;

string removeSpace(string text)
{
	bool space = true;
	int place;
	while (space == true)
	{
		place = text.find(",");
		if (place != -1)
		{
			text.replace(place, 1, " ");
		}
		if (place == -1)
		{
			space = false;
		}
	}
	return text;
}

int main()
{
	cout << "please enter some text, however make sure to replace every space with a comma" << endl;
	string text;
	getline(cin, text);
	cout << removeSpace(text) << endl;;
}