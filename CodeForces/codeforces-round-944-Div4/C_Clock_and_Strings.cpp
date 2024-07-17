#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll maxWeightCell(ll N, vector<ll> edge)
{
    vector<ll> temp(N, 0);
    for (ll i = 0; i < N; i++)
    {
        if (edge[i] != -1)
        {
            temp[edge[i]] += i;
        }
    }
    ll ans = max_element(temp.begin(), temp.end()) - temp.begin();
    return ans;
}
int main()
{

    ll n;
    cin >> n;
    vector<ll> edge(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> edge[i];
    }
    cout << maxWeightCell(n, edge) << endl;
    return 0;
}