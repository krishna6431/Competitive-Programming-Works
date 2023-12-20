// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// bottom up code to min-operation-to-make-1
int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
    }

    vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        int op1 = 1e9, op2 = 1e9, op3 = 1e9;
        if (i % 3 == 0)
        {
            op2 = dp[i / 3];
        }
        if (i % 2 == 0)
        {
            op1 = dp[i / 2];
        }
        op3 = dp[i - 1];

        dp[i] = 1 + min(op1, min(op2, op3));
    }

    for (auto x : dp)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << dp[n] << endl;
    return 0;
}