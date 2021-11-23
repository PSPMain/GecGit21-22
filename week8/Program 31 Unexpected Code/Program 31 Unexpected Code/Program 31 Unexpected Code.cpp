#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "enter a number : " << endl;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << i;
        if (i % 2==0)
            cout << " is an even number" << endl;
        else if(i%2!=0)
            cout << " is an odd number" << endl;
    }

    // Pause the output
    cin.get();
}
