// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "2 ";
    for (int i = 3; i <= n; i++)
    {
        bool flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}