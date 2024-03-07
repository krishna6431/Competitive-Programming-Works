// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

string karoNa(int i, int j, int r, int c)
{
    if (i == 0 or j == 0 or i == r - 1 or j == c - 1)
    {
        return "*";
    }
    else
    {
        return " ";
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
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << karoNa(i, j, r, c) << "";
            }
            cout << endl;
        }
    }
    return 0;
}