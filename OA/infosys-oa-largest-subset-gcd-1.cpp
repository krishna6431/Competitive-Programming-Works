// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXV = 100000;
vector<ll> spf(MAXV + 1, 0);

void sieve()
{
    for (ll i = 2; i <= MAXV; ++i)
    {
        if (spf[i] == 0)
        {
            for (ll j = i; j <= MAXV; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

ll solve(const vector<ll> &arr)
{
    unordered_map<ll, ll> pcnt;
    vector<ll> dp(arr.size(), 1);

    for (ll i = 0; i < arr.size(); ++i)
    {
        ll num = arr[i];
        bool valid = true;
        unordered_set<ll> factors;
        ll temp = num;

        while (temp > 1)
        {
            ll p = spf[temp];
            if (pcnt[p] > 0)
            {
                valid = false;
                break;
            }
            factors.insert(p);
            while (temp % p == 0)
            {
                temp /= p;
            }
        }

        if (!valid)
            continue;

        for (ll j = 0; j < i; ++j)
        {
            if (__gcd(arr[j], num) == 1)
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        for (ll p : factors)
        {
            pcnt[p]++;
        }
    }

    return *max_element(dp.begin(), dp.end());
}

signed main()
{

    sieve();

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << solve(arr) << '\n';

    return 0;
}
