#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

ll solve(ll N, ll L, ll R, vector<ll> &arr)
{
    vector<ll> dp(N);
    vector<ll> px(N);
    ll ans = 0;

    px[0] = arr[0];
    if (L <= arr[0] && arr[0] <= R)
    {
        dp[0] = 1;
    }

    for (ll i = 1; i < N; ++i)
    {
        px[i] = px[i - 1] ^ arr[i];

        if (L <= px[i] && px[i] <= R)
        {
            dp[i] += 1;
        }

        dp[i] %= MOD;
        for (ll j = 0; j < i; ++j)
        {
            ll xor_val = px[i] ^ px[j];
            if (L <= xor_val && xor_val <= R)
            {
                dp[i] += dp[j];
                dp[i] %= MOD;
            }
        }
    }

    ans = dp[N - 1];

    return ans;
}

signed main()
{
    ll N, L, R;
    cin >> N >> L >> R;
    vector<ll> arr(N);
    for (ll i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    ll result = solve(N, L, R, arr);

    cout << result << endl;

    return 0;
}
