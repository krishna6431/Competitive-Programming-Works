// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int solution(const vector<int> &a)
{
    vector<int> count(128);
    for (int i = 1; i < 128; ++i)
    {
        count[i] = count[i & (i - 1)] + 1;
    }

    vector<vector<int>> dp(2, vector<int>(128, INT_MAX));
    // dp[.][x] means the smallest value of the last element of the subsequence
    // when the xor of all the values == x.
    int last = 0;
    for (int x : a)
    {
        const int now = last ^ 1;
        dp[now] = dp[last];
        // Only take value x as a subsequence of length 1.
        dp[now][x] = min(x, dp[last][x]);
        for (int i = 0; i < 128; ++i)
        {
            if (dp[last][i] < x && count[i] <= count[x])
            {
                const int s = i ^ x;
                dp[now][s] = min(dp[now][s], x);
            }
        }
        last ^= 1;
    }
    int r = 0;
    for (int x : dp[last])
    {
        r += x < INT_MAX;
    }
    return r;
}
int main()
{
    cout << solution({1, 2, 3, 4}) << endl;
    return 0;
}