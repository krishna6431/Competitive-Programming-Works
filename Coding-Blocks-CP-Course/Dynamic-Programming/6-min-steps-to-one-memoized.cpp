// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int minStepsToOne(int n, vector<int> &dp)
{
    if (n == 1)
    {
        return dp[n] = 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int smallAns1 = 1e9, smallAns2 = 1e9, smallAns3 = 1e9;
    if (n % 3 == 0)
    {
        smallAns1 = minStepsToOne(n / 3, dp);
    }
    if (n % 2 == 0)
    {
        smallAns2 = minStepsToOne(n / 2, dp);
    }
    smallAns3 = minStepsToOne(n - 1, dp);

    return dp[n] = 1 + min(smallAns1, min(smallAns2, smallAns3));
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << minStepsToOne(n, dp);
    return 0;
}