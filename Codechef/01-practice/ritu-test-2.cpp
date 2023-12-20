// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve2(ll idx, vector<ll> &knap, ll b)
{
    if (idx == knap.size())
    {
        if (b == 0)
            return 0;
        else
            return 1e9;
    }
    ll take = 1e9;
    if (b - knap[idx] >= 0)
    {
        take = 1 + solve2(idx, knap, b - knap[idx]);
    }
    ll notTake = solve2(idx + 1, knap, b);
    return min(take, notTake);
}

ll solve(vector<ll> &a, ll k)
{
    unordered_set<ll> s;
    for (auto x : a)
    {
        s.insert(x);
    }
    for (auto x : a)
    {
        if (x % 2 == 0)
        {
            if (s.find(x) != s.end())
            {
                s.insert(x);
                while (x % 2 == 0)
                {
                    s.insert(x / 2);
                    x = x / 2;
                }
                s.insert(x);
            }
        }
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<ll> knap;
    for (auto x : s)
    {
        knap.push_back(x);
    }
    sort(knap.begin(), knap.end());
    ll ans = solve2(0, knap, k);
    return ans;
}

int main()
{
    // vector<ll> v = {1, 32, 1};
    // ll ans = solve(v, 10);
    vector<ll> v = {5, 2, 1, 16, 1, 8};
    ll ans = solve(v, 20);
    cout << ans << endl;
    return 0;
}