#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

struct topTen
{  
    int score=0;
    string name;
};

void sort()
{
    topTen scores;
    vector<int> scoreVector;
    vector<string> nameVector;
    vector <int>::iterator it;
    vector <string>::iterator it2;
    cout << "enter a score and a name" << endl;
    cin >> scores.score;
    cin >> scores.name;
    it = scoreVector.begin();
    it2 = nameVector.begin();
    while (scoreVector.size() <= 10)
    {
        if (!scoreVector.empty())
        {
            for (int i = 0; i < scoreVector.size(); i++)
            {


                if (scores.score > scoreVector[i])
                {

                }
                if (scores.score < scoreVector[i])
                {
                    scoreVector.insert(it - 1, scores.score);
                    nameVector.insert(it2 - 1, scores.name);
                }
                it++;
                it2++;


            }
        }
        else
        {
            scoreVector.push_back(scores.score);
            nameVector.push_back(scores.name);
        }
        for (int i = 0; i < scoreVector.size(); i++)
        {
            cout << scoreVector[i] << endl << nameVector[i] << endl;
        }
    }
    scoreVector.resize(10);
    nameVector.resize(10);
}

int main()
{ 
    topTen scores;
    vector<int> scoreVector;
    vector<string> nameVector;
    vector <int>::iterator it;
    vector <string>::iterator it2;
    
    it = scoreVector.begin();
    it2 = nameVector.begin();
    int userChoice = 0;           
    fstream file;
    cout << "1. enter a score: " << endl;
    cout << "2. display scores: " << endl;
    cout << "3. exit: " << endl;
    cin >> userChoice;
    if (userChoice == 1)
    {
    cout << "enter a score and a name" << endl;
    cin >> scores.score;
    cin >> scores.name;
    while (scoreVector.size() <= 10)
    {
        if (!scoreVector.empty())
        {
            for (int i = 0; i < scoreVector.size(); i++)
            {


                if (scores.score > scoreVector[i])
                {

                }
                if (scores.score < scoreVector[i])
                {
                    scoreVector.insert(it - 1, scores.score);
                    nameVector.insert(it2 - 1, scores.name);
                }
                it++;
                it2 = nameVector.begin() + i;


            }
        }
        else
        {
            scoreVector.push_back(scores.score);
            nameVector.push_back(scores.name);
        }
        for (int i = 0; i < scoreVector.size(); i++)
        {
            cout << scoreVector[i] << endl << nameVector[i] << endl;
        }
    }
    scoreVector.resize(10);
    nameVector.resize(10);
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
    
