
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll dp[101][100001];
ll solve(ll idx, ll k, vector<ll> &v)
{
    if (idx >= v.size())
    {
        if (k == 0)
        {
            return 1;
        }
        return 0;
    }

    if (dp[idx][k] != -1)
    {
        return dp[idx][k];
    }

    ll possible = solve(idx + 1, k, v);
    if (k - v[idx] >= 0)
    {
        possible |= solve(idx + 1, k - v[idx], v);
    }
    return dp[idx][k] = possible;
}

vector<int> used;

void generate(ll idx, ll k, vector<ll> &v)
{
    if (idx >= v.size())
    {
        return;
    }
    if (k - v[idx] >= 0)
    {
        if (solve(idx + 1, k - v[idx], v))
        {
            used.push_back(idx);
            generate(idx + 1, k - v[idx], v);
        }
        else
        {
            generate(idx + 1, k, v);
        }
    }
    else
    {
        generate(idx + 1, k, v);
    }
}

vector<vector<int>> subset_queries(vector<int> &arr, vector<int> &queries)
{
    vector<ll> v;
    for (auto x : arr)
    {
        v.push_back(x);
    }
    memset(dp, -1, sizeof(dp));
    vector<vector<int>> res;
    for (int i = 0; i < queries.size(); i++)
    {
        ll x = queries[i];
        used.clear();
        if (solve(0, x, v))
        {
            solve(0, x, v);
            generate(0, x, v);
            res.push_back(used);
        }
        else
        {
            res.push_back({-1});
        }
    }
    return res;
}

void solve()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    vector<int> queries(Q);
    for (int i = 0; i < Q; i++)
        cin >> queries[i];
    auto ans = subset_queries(arr, queries);

    // checker.
    if (ans.size() != Q)
    {
        cout << 101 << endl;
        return;
    }
    for (int i = 0; i < Q; i++)
    {
        auto x = ans[i];
        if (x.size() == 0)
        {
            cout << 101 << endl;
            continue;
        }
        if (x.size() == 1 && x[0] == -1)
        {
            cout << -1 << endl;
            continue;
        }
        ll sum = 0, p = -10;
        for (auto y : x)
        {
            if (y < 0 || y >= N || p >= y)
            { // valid 0-indexed.
                sum = -1111;
                break;
            }
            p = y;
            sum += arr[y];
        }
        if (sum == queries[i])
        {
            cout << 1 << endl;
        }
        else
            cout << 101 << endl;
    }
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifdef Mastermind_
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // int i = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}
