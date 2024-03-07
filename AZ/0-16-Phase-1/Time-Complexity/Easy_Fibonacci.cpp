// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 0 << " ";
        }
        else if (i == 2)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << (c = a + b) << " ";
            a = b;
            b = c;
        }
    }
    return 0;
}