#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "enter your name: " << endl;
    string name;
    getline(cin, name);
    string testString = "Do you know who loves C++ XX does!";
    int pos = testString.rfind("X");
    testString.insert(pos, name);
    cout << testString << endl;
    testString.replace(pos-1, name.length()+2, name);
    cout << testString << endl;
    cout << "enter another name, it must be longer than the one you entered before: " << endl;
    string name2;
    getline(cin, name2);
    pos = testString.rfind(name);
    testString.replace(pos, name.length(), name2);
    cout << testString << endl;
}
