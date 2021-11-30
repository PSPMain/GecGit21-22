#include <iostream>
using namespace std;

int plus25(int* n)
{
    *n += 25;
    return *n;
}
int minus25(int* n)
{
    *n -= 25;
    return *n;
}



int main()
{
    int num;
    int* rNum = &num;
    cout << "input a number" << endl;
    cin >> num;
    cout << num << endl;
    num=plus25(rNum);
    cout << num << endl;
    /*system("cls");*/
    cout << "input a number" << endl;
    cin >> num;
    cout << num << endl;
    num=minus25(rNum);
    cout << num << endl;
}
    
