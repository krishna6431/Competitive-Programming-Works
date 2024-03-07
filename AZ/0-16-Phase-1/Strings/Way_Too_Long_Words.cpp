// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
#define size(x) x.size()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (size(str) <= 10)
        {
            cout << str << endl;
        }
        else
        {
            cout << str[0] << size(str) - 2 << str[size(str) - 1] << endl;
        }
    }
    return 0;
}