#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// code written by mr_krishna

// this code works for only operators which are idempotent in nature means (op1 op op1 ) = op1
// Sparse Table (RMQ - Range Max Query) Find max in any range when updates are not there (in logn time)
// sparseTable sp1;
// sp1.init(n);
// sp1.build(left); [Provided left was the array made -> vector<int> left(n)]
// sp1.query(0,i-1) [Query max value in range from l to r, both inclusive in above (left) array]
struct sparseTable
{
    ll n, k;
    vector<vector<ll>> table;
    vector<ll> logs;

    void init(ll x)
    {
        n = x;
        logs.resize(n + 1);
        logs[1] = 0;
        for (ll i = 2; i <= n; i++)
            logs[i] = logs[i / 2] + 1;
        k = *max_element(logs.begin(), logs.end());
        table.resize(k + 1, vector<ll>(n + 1, -1e9));
    }

    ll operation(ll x, ll y)
    {
        return max(x, y);
    }

    void build(vector<ll> &arr)
    {
        for (ll i = 0; i < n; i++)
            table[0][i] = arr[i];

        for (ll j = 1; j <= k; j++)
        {
            for (ll i = 0; i + (1 << j) <= n; i++)
                table[j][i] = operation(table[j - 1][i], table[j - 1][i + (1 << (j - 1))]);
        }
    }

    ll query(ll l, ll r)
    {
        ll j = logs[r - l + 1];
        ll answer = operation(table[j][l], table[j][r - (1 << j) + 1]);
        return answer;
    }
};

// Example for Reference - How to use sparse table
// Problem - https://codeforces.com/contest/1826/problem/D
/*

    ll n;
    cin >> n;

    vl arr(n, 0);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vl left(n), right(n);
    for (ll i = 0; i < n; i++) {
        left[i] = arr[i] + i;
        right[i] = arr[i] - i;
    }

    sparseTable sp1;
    sp1.init(n);
    sp1.build(left);

    sparseTable sp2;
    sp2.init(n);
    sp2.build(right);

    ll ans = -1;
    for (ll i = 1; i < n - 1; i++) {
        ans = max(ans, arr[i] + sp1.query(0, i - 1) + sp2.query(i + 1, n - 1));
    }

    cout << ans << endl;

*/
