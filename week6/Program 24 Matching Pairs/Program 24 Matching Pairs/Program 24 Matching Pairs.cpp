#include <iostream>
using namespace std;

char boardCards[10] = { 'a', 'e','d','a','b','b','c','d','e','c' };
bool foundCards[10] = { false };
int attemptCount = 0;

void drawBoard(int guess1, int guess2)
{
    system("cls");
    cout << "the attempt count is: " << attemptCount << endl;
    for (int i = 0; i < 10; i++)
    {
        if (foundCards[i] || i + 1 == guess1 || i + 1 == guess2)
        {
            cout << "[" << boardCards[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]";
        }
        if (i == 4)
        {
            cout << endl;
        }
        
    }
    cout << endl;
}

void DrawBoard()
{
    system("cls");
    cout << "your current attempt count is: " << attemptCount << endl;
    for (int i = 0; i < 10; i++)
    {
        if (foundCards[i] == true)
        {
            cout << "[" << boardCards[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]";
        }
        if (i == 4)
        {
            cout << endl;
        }
        
    }
    cout << endl;
}

int main()
{
    int score = 0;
    bool playing = true;

    while (playing == true)
    {
        int space;
        DrawBoard();
        int guess1=0;
        int guess2=0;
        cout << "Pick ur cards" << endl;
        cin >> guess1;
        drawBoard(guess1, guess2);
        cin >> guess2;
        drawBoard(guess1, guess2);
        space=getc(stdin);
        if (boardCards[guess1 - 1] == boardCards[guess2 - 1]&&guess1!=guess2)
        {
            cout << "MATCH!!!" << endl;
            attemptCount++;
            score++;
            foundCards[guess1 - 1] = true;
            foundCards[guess2 - 1] = true;
            space=getc(stdin);
        }
        else
        {
            attemptCount++;
            cout << "no match" << endl;
            space=getc(stdin);
        }
        if (score == 5)
        {
            cout << "you WIN!!!!!!!!!!" << endl;
            cout << "would you like to play again? y/n: " << endl;
            char num;
            cin >> num;
            if (num == 'y')
            {
                playing = true;
                score = 0;
                attemptCount = 0;
                for (int i = 0; i < 10; i++)
                {
                    foundCards[i] = { false };
                }
            }
            else
            {
                playing = false;
            }
        }
    }
}
