// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bounded_knapsack(ll idx, ll capacity, ll wt[], ll val[])
{
    if (idx == 0)
    {
        if (wt[idx] <= capacity)
        {
            return val[idx];
        }
        return 0;
    }

    ll include = -1e9;
    if (wt[idx] <= capacity)
    {
        include = val[idx] + bounded_knapsack(idx - 1, capacity - wt[idx], wt, val);
    }
    ll exclude = bounded_knapsack(idx - 1, capacity, wt, val);

    return max(include, exclude);
}

int main()
{
    ll n, capacity;
    cin >> n >> capacity;
    ll wt[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    ll profit[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    cout << "Profit: " << bounded_knapsack(n - 1, capacity, wt, profit);
    return 0;
}