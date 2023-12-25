// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// memoize dp  to compute fibbonnaci number
// time complexity : O(N)
// space complexity : O(N) for storing dp array
int fib(int n, vector<int> &dp)
{
    if (n == 0 or n == 1)
    {
        return dp[n] = n;
    }
    // lookup
    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

// main function starts here
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fib(n, dp);
    return 0;
}