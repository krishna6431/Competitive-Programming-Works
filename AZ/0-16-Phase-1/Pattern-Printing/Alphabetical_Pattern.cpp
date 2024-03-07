// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int fact = 0;
char ch = 'A';
char karoNa(int i, int j, int r, int c)
{
    if (i >= j - fact)
    {
        return ch++;
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
        c = r;
        for (int i = 0; i < r; i++)
        {
            ch = 'A';
            for (int j = 0; j < c; j++)
            {
                cout << karoNa(i, j, r, c) << "";
                if (ch == 'Z' + 1)
                {
                    ch = 'A';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
