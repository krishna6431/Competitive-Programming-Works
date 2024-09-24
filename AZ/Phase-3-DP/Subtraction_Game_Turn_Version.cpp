#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long ll;

ll fast_expo(ll base, ll exp)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

ll solve(ll n, ll turn, vector<vector<ll>> &dp)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n][turn] != -1)
    {
        return dp[n][turn];
    }

    if (turn == 0)
    {
        ll score = 0;
        for (int i = 0; fast_expo(2, i) <= n; i++)
        {
            ll pow2 = fast_expo(2, i);
            if (pow2 <= n)
            {
                score = max(score, pow2 + solve(n - pow2, 1 - turn, dp));
            }
        }
        dp[n][turn] = score;
    }
    else
    {
        ll score = 1e9;
        for (int i = 0; fast_expo(2, i) <= n; i++)
        {
            ll pow2 = fast_expo(2, i);
            if (pow2 <= n)
            {
                score = min(score, solve(n - pow2, 1 - turn, dp));
            }
        }
        dp[n][turn] = score;
    }

    return dp[n][turn];
}

void HarHarMahadev()
{
    ll n;
    cin >> n;

    vector<vector<ll>> dp(n + 1, vector<ll>(2, -1));

    ll scoreVivek = solve(n, 0, dp);
    if (dp[n][0])
    {
        cout << "Vivek" << endl;
    }
    else
    {
        cout << "Abhishek" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll testcase_cnt;
    cin >> testcase_cnt;
    while (testcase_cnt--)
    {
        HarHarMahadev();
    }

    return 0;
}