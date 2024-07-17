// code written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

ll solve(ll idx, ll k, vector<ll> &nums, ll tar, unordered_map<string, ll> &dp)
{
    if (k < 0)
    {
        return 0;
    }

    if (idx == nums.size())
    {
        if (k == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    string key = to_string(idx) + "_" + to_string(k);

    if (dp.find(key) != dp.end())
    {
        return dp[key];
    }

    ll sum = 0;
    ll ways = 0;
    for (ll i = idx; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == tar)
        {
            ways = (ways % MOD + solve(i + 1, k - 1, nums, tar, dp) % MOD) % MOD;
        }
    }
    return dp[key] = ways % MOD;
}

signed main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    ll total = 0;
    for (ll num : nums)
    {
        total += num;
    }
    if (total % k != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    ll tar = total / k;
    unordered_map<string, ll> dp;
    ll result = solve(0, k, nums, tar, dp);
    cout << result << endl;
    return 0;
}
