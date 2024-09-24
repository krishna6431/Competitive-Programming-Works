#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll findCapableWinners(vector<ll> power_type_a, vector<ll> power_type_b, vector<ll> power_type_c)
{
    ll n = power_type_a.size();
    ll cw = 0;
    vector<ll> mp(3, 0);
    vector<vector<ll>> pl;

    for (ll i = 0; i < n; ++i)
    {
        vector<ll> p = {power_type_a[i], power_type_b[i], power_type_c[i]};
        sort(p.begin(), p.end(), greater<ll>());
        pl.push_back(p);

        for (ll j = 0; j < 3; ++j)
        {
            mp[j] = max(mp[j], p[j]);
        }
    }

    for (const auto &p : pl)
    {
        if ((p[0] > mp[1] && p[1] > mp[2]) ||
            (p[0] > mp[1] && p[0] > mp[0]) ||
            (p[1] == mp[1] && p[0] == mp[0]))
        {
            ++cw;
        }
    }

    return cw;
}

signed main()
{
    vector<ll> power_a = {9, 4, 2};
    vector<ll> power_b = {5, 12, 10};
    vector<ll> power_c = {11, 3, 13};

    ll ans = findCapableWinners(power_a, power_b, power_c);

    cout << ans << endl;

    return 0;
}