#include <iostream>
#include <string>
using namespace std;

struct personDetails
{
    string name;
    int age;
    string phoneNumber;
    void PrintDetails()
    {
        cout << name << endl;
        cout << age << endl;
        cout << phoneNumber << endl;
    };
};


int main()
{
    personDetails person;
    cout << "please enter your name, phone number and age on seperate lines please;" << endl;
    getline(cin,person.name);
    getline(cin, person.phoneNumber);
    cin >> person.age;
    cout << endl;
    person.PrintDetails();
}
