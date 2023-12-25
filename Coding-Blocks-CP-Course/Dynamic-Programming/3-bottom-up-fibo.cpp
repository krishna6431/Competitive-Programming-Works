// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// time complexity : O(N);
// space complexity : O(N);

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    // write base case
    dp[1] = 1;
    // recursion converted to iteration
    for (int i = 2; i <= n; i++)
    {
        // recurrence relation converted to expression
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    // final output
    cout << dp[n] << endl;
    return 0;
}