// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (i + j + 1 == n)
                {
                    ans2 += arr[i][j];
                }
                if (i == j)
                {
                    ans1 += arr[i][j];
                }
            }
        }
        cout << abs(ans1 - ans2) << endl;
        // 00 02 03 03 11 12 13 14 21 22 23 24
    }
    return 0;
}