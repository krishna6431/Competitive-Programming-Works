// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int total = i + j;
            if (s - total <= k and s - total >= 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}