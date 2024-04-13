// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int fact = 0;
char karoNa(int i, int j, int r, int c)
{
    if (i >= j - (r - 1) and i >= (r - 1) - j)
    {
        return '*';
    }
    else
    {
        return ' ';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r;
        c = 2 * r - 1;
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                cout << karoNa(i, j, r, c) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
