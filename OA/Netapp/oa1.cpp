#include <bits/stdc++.h>
using namespace std;

using ll = long long;
pair<ll, ll> solve2(ll a[], ll n)
{
    unordered_map<ll, ll> idx;
    ll ans = 0, x = -1, y = -1;

    for (ll i = 0, j = 0; i < n; i++)
    {
        j = max(idx[a[i]], j);
        if ((i - j + 1) >= ans)
        {
            if ((i - j + 1) == ans)
            {
                if (i == (n - 1) || j == 0)
                {
                    ans = i - j + 1;
                    x = i;
                    y = j;
                }
            }
            else
            {
                ans = i - j + 1;
                x = i;
                y = j;
            }
        }
        idx[a[i]] = i + 1;
    }

    return {x, y};
}

ll solve(ll *arr, ll n)
{
    pair<ll, ll> p = solve2(arr, n);

    ll i = p.second;
    ll j = p.first;

    return 2 * min(i, n - j - 1) + max(i, n - j - 1);
}

signed main()
{
    ll arr[] = {2, 3, 4, 1, 1};
    ll N = sizeof(arr) / sizeof(arr[0]);

    cout << solve(arr, N);
    return 0;
}
