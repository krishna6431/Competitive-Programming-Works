// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

char karoNa(int i, int j, int r, int c)
{
    if (i % 3 == 0 or i % 3 == 3 or j % 3 == 0 or j % 3 == 3)
    {
        return '*';
    }
    else
    {
        return '.';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;

        for (int i = 0; i < 3 * r + 1; i++)
        {

            for (int j = 0; j < 3 * c + 1; j++)
            {
                cout << karoNa(i, j, r, c) << "";
            }
            cout << endl;
        }
    }
    return 0;
}
