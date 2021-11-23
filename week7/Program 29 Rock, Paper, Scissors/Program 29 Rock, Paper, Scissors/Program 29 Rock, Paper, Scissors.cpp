#include <iostream>
#include <string>
using namespace std;

bool playing = true;

int main()
{
    int computerScore=0;
    int score=0;
    while (playing==true)
    {
        if (score != 3 || computerScore != 3)
        {
            cout << "enter your selection: ";
            string choice;
            getline(cin, choice);
            cout << "you chose: " << choice << endl;
            string computer[3] = { "rock","paper","scisors" };
            int randInt = rand() % 3;
            cout << "the computer chose: " << computer[randInt] << endl;
            if (computer[randInt] == choice)
            {
                cout << "it is a draw: no one wins" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (computer[randInt] == "paper" && choice == "rock")
            {
                computerScore++;
                cout << "the computer wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (computer[randInt] == "rock" && choice == "scisors")
            {
                computerScore++;
                cout << "the computer wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;
            }
            else if (computer[randInt] == "scisors" && choice == "paper")
            {
                computerScore++;
                cout << "the computer wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (choice == "paper" && computer[randInt] == "rock")
            {
                score++;
                cout << "the player wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (choice == "paper" && computer[randInt] == "rock")
            {
                score++;
                cout << "the player wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (choice == "scisors" && computer[randInt] == "paper")
            {
                score++;
                cout << "the player wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
            else if (choice == "rock" && computer[randInt] == "scisors")
            {
                score++;
                cout << "the player wins this round!" << endl;
                cout << "you need: " << 3 - score << " to complete the game." << endl;
                cout << "the computer needs: " << 3 - computerScore << " to complete the game." << endl;
                cout << "************************" << endl;

            }
        }

        if (score == 3 && computerScore != 3)
        {
            cout << "you win!" << endl;
            cout << "game over!" << endl;
            playing = false;
        }
        else if(computerScore==3&&score!=3)
        {
            cout << "the computer wins!" << endl;
            cout << "game over!" << endl;
            playing = false;
        }
        else
        {

        }
    }

}
