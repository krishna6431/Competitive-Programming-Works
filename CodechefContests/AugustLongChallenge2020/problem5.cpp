#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int arr1[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1[arr[i]]++;
        }
        int dup = 0;
        for (int i = 0; i < 101; i++)
        {
            if (arr1[i] != 1)
            {
                dup += arr1[i];
            }
        }
        int res = k * 1 + dup;

        for (int i = 2, temp = n; i <= n; i++, temp--)
        {
            int duplex = 0;
            int c[101];
            int c1[101];
            for (int j = 0; j < i; j++)
            {

                c[arr[j]]++;
            }
            for (int k = i; k <= n; k++)
            {

                c1[arr[k]]++;
            }
            for (temp = 0; temp < 101; temp++)
            {
                if (c[temp] > 1)
                {
                    duplex++;
                }
                if (c1[temp] > 1)
                {
                    duplex++;
                }
            }
            int res1 = k * i + duplex;
            if (res1 < res)
            {
                res = res1;
            }
        }
        cout << res << endl;
    }

    return 0;
}
