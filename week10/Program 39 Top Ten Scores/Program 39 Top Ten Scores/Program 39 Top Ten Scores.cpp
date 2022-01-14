#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

bool InputCheck(string& stringToCheck)
{
    for (char const s : stringToCheck)
    {
        if (isdigit(s))
        {
            return false;
        }
        return true;
    }
}
//struct topTen
//{  
//    int score=0;
//    string name;
//};



//void sort2()
//{
//    topTen scores;
//    vector<int> scoreVector(10);
//    vector<string> nameVector(10);
//    vector <int>::iterator it;
//    vector <string>::iterator it2;
//
//    it = scoreVector.begin();
//    it2 = nameVector.begin();
//    cout << "enter a score and a name" << endl;
//    cin >> scores.score;
//    cin >> scores.name;
//
//    
//}
//
//void sort()
//{
//    topTen scores;
//    vector<int> scoreVector;
//    vector<string> nameVector;
//    vector <int>::iterator it;
//    vector <string>::iterator it2;
//    it = scoreVector.begin();
//    it2 = nameVector.begin();
//    cout << "enter a score and a name" << endl;
//    cin >> scores.score;
//    cin >> scores.name;
//    
//    while (scoreVector.size() <= 10)
//    {
//        if (!scoreVector.empty())
//        {
//            for (int i = 0; i < scoreVector.size(); i++)
//            {
//
//
//                if (scores.score > scoreVector[i])
//                {
//
//                }
//                if (scores.score < scoreVector[i])
//                {
//                    scoreVector.insert(it - 1, scores.score);
//                    nameVector.insert(it2 - 1, scores.name);
//                }
//                it++;
//                it2++;
//
//
//            }
//        }
//        else
//        {
//            scoreVector.push_back(scores.score);
//            nameVector.push_back(scores.name);
//        }
//        for (int i = 0; i < scoreVector.size(); i++)
//        {
//            cout << scoreVector[i] << endl << nameVector[i] << endl;
//        }
//    }
//    scoreVector.resize(10);
//    nameVector.resize(10);
//}

int main()
{ 
    int userIn;
    bool isLoop = true;
    bool isLoop2 = true;
    ofstream outFile;
    ifstream inFile;
    vector<string> leaderBoard(20);
    string name;
    string score;

    inFile.open("scores.txt");
    if (!inFile.is_open())
    {
        cout << "Can't access the File" << endl;
    }
    for (int i = 0; i < leaderBoard.size(); i++)
    {
        inFile >> leaderBoard[i];
    }
    inFile.close();
    while (isLoop)
    {

        cout << "1. enter a score: " << endl;
        cout << "2. display scores: " << endl;
        cout << "3. exit: " << endl;
        cin >> userIn;

        if (userIn == 1)
        {
            while (isLoop2) 
            {
                cout << "   Please enter your name and score: "<<endl;
                cin >> name;
                cin >> score;
                if (InputCheck(score) == false)
                {
                    cout << "please enter a valid score!" << endl;
                    continue;
                }

                isLoop2 = false;
            } 
            vector<string> placeHolder(leaderBoard.size());
            if (leaderBoard[19] != "\n")
            {
                leaderBoard.push_back("");
                leaderBoard.push_back("");
            }
            for (int i = 0; i < 20; i += 2)
            {
                if (score == "0")
                {
                    for (int u = i; u < 20; u++)
                        placeHolder[u] = leaderBoard[u];

                    i = 20;
                    continue;
                }
                else if (leaderBoard[i] == "")
                {
                    placeHolder[i] = score;
                    placeHolder[i + 1] = name;
                    i = 20;
                }
                else if (stoi(score) < stoi(leaderBoard[i]))
                {
                    placeHolder[i] = leaderBoard[i];
                    placeHolder[i + 1] = leaderBoard[i + 1];
                }
                else if (stoi(score) > stoi(leaderBoard[i]) || stoi(leaderBoard[i]) == stoi(score))
                {
                    placeHolder[i] = score;
                    placeHolder[i + 1] = name;

                    if (i < 18)
                    {
                        placeHolder[i + 2] = leaderBoard[i];
                        placeHolder[i + 3] = leaderBoard[i + 1];
                        i += 2;
                    }
                    score = "0";
                    name = "";

                }
            }
            if (leaderBoard.size() > 20)
            {
                leaderBoard.pop_back();
                leaderBoard.pop_back();
            }
            for (int i = 0; i < leaderBoard.size(); i++)
            {
                leaderBoard[i] = placeHolder[i];
            }
            outFile.open("scores.txt");
            for (int i = 0; i < leaderBoard.size(); i++)
            {
                if (i % 2 == 0 && i > 0)
                {
                    outFile << endl;
                }
                outFile << leaderBoard[i] << endl;
            }
            outFile.close();
        }
        if (userIn == 2)
        {
            for (int i = 0; i < leaderBoard.size(); i++)
            {
                if (i % 2 == 0)
                    cout << "Score: " << endl;
                else if (i % 2 != 0)
                    cout << "Name: " << endl;;
                cout << leaderBoard[i] << endl;
            }
        }
        if (userIn == 3)
        {
            outFile.open("scores.txt");
            for (int i = 0; i < leaderBoard.size(); i++)
            {
                if (i % 2 == 0 && i > 0)
                {
                    outFile << endl;
                }
                outFile << leaderBoard[i] << endl;
            }
            outFile.close();
            return 0;
        }


    }
    
}
    
