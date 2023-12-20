// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;
// Given n*m grid ways to tile using (1*m) tile
ll solveKaro(ll n, ll m, vector<ll> &dp)
{
    // base case
    if (n < m)
    {
        return dp[n] = 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll ans1 = solveKaro(n - m, m, dp) % mod;
    ll ans2 = solveKaro(n - 1, m, dp) % mod;
    return dp[n] = (ans1 % mod + ans2 % mod) % mod;
}

int main()
{
    ll testcase;
    cin >> testcase;
    while (testcase--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> dp(n + 1, -1);
        ll ans = solveKaro(n, m, dp);
        cout << ans << endl;
    }

    return 0;
}