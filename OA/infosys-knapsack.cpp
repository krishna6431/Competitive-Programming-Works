#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 1e9;

ll solve(ll W, vector<ll> &wt, vector<ll> &pr)
{
    ll n = wt.size();
    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, 0));
    vector<vector<ll>> cnt(n + 1, vector<ll>(W + 1, INF));

    for (ll i = 0; i <= n; ++i)
    {
        cnt[i][0] = 0;
    }

    for (ll i = 1; i <= n; ++i)
    {
        for (ll w = 0; w <= W; ++w)
        {
            dp[i][w] = dp[i - 1][w];
            cnt[i][w] = cnt[i - 1][w];
            if (wt[i - 1] <= w)
            {
                ll new_pr = dp[i - 1][w - wt[i - 1]] + pr[i - 1];
                if (new_pr > dp[i][w])
                {
                    dp[i][w] = new_pr;
                    cnt[i][w] = cnt[i - 1][w - wt[i - 1]] + 1;
                }
                else if (new_pr == dp[i][w] && cnt[i - 1][w - wt[i - 1]] + 1 < cnt[i][w])
                {
                    cnt[i][w] = cnt[i - 1][w - wt[i - 1]] + 1;
                }
            }
        }
    }

    ll max_pr = dp[n][W];
    ll min_cnt = INF;
    for (ll w = 0; w <= W; ++w)
    {
        if (dp[n][w] == max_pr)
        {
            min_cnt = min(min_cnt, cnt[n][w]);
        }
    }

    return min_cnt;
}

signed main()
{
    ll n, W;
    cin >> n >> W;

    vector<ll> wt(n), pr(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> pr[i];
    }
    for (ll i = 0; i < n; ++i)
    {
        cin >> wt[i];
    }

    ll res = solve(W, wt, pr);
    cout << res << endl;

    return 0;
}
