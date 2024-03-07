// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int k;
        cin >> k;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == k)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << "will take number" << endl;
        }
        else
        {
            cout << "will not take number" << endl;
        }
    }
    return 0;
}