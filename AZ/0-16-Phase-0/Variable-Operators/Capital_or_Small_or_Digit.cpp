// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 48 and ch <= 64)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (ch >= 65 and ch <= 92)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}