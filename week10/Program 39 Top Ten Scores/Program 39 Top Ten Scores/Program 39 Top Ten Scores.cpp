#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct topTen
{  
    int score;
    string name;
};

void sort()
{
    topTen scores;
    string array[10][2];
    cout << "enter a score and then a name" << endl;
    cin >> scores.score;
    string store;
    string store1;
    for (int i = 0; i < 10; i++)
    {
        if (scores.score > stoi(array[i][1]))
        {

        }
        else if (scores.score < stoi(array[i][1]))
        {
            store = to_string(scores.score);
            store1 = array[i - 1][1];
            array[i - 1][1] = store;
        }
    }
}

int main()
{
    string array[10][2];
    topTen scores;
    int userChoice = 0;
    fstream file;
    cout << "1. enter a score: " << endl;
    cout << "2. display scores: " << endl;
    cout << "3. exit: " << endl;
    if (userChoice == 1)
    {
        cout << "enter a score and a name" << endl;
        file.open("scores.txt");
    }
    else if (userChoice == 2)
    {

    }
    else if (userChoice == 3)
    {

    }
    else
    {
        cout << "this was not a valid option!" << endl;
    }
}
    
