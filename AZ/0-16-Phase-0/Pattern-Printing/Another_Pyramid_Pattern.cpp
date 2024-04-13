// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int ch = 1;
int karoNa(int i, int j, int r, int c, int inst)
{
    if (i >= j - (r - 1) and i >= (r - 1) - j)
    {
        if (inst == 0)
        {
            return ch++;
        }
        else
        {
            return --ch;
        }
    }
    return -1;
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

            int inst = 0;
            ch = 1;
            for (int j = 0; j < c; j++)
            {
                int ans = karoNa(i, j, r, c, inst);
                if (ans != -1)
                {
                    cout << ans << " ";
                }
                else
                {
                    cout << "  ";
                }
                if (j == c / 2)
                {
                    inst = 1;
                    ch--;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
