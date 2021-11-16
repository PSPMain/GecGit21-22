#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "enter a sentence" << endl;
	string sentence;
	string x = "x";
	getline(cin, sentence);
	cout << sentence << endl;
	for (int i = 0; i < sentence.size(); i++)
	{
		int pos = sentence.rfind("e");
		sentence.replace(pos, 1, x);
	}
	cout << sentence << endl;
}
