#include <bits/stdc++.h>
using namespace std;

#define ll int64_t
#define endl '\n'

int n, m;
vector<vector<array<int, 2>>> adj;
void solve()
{
    cin >> n >> m;
    adj.assign(n + 1, vector<array<int, 2>>());
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, 0}); // normal edge having weight 0.
        adj[v].push_back({u, 1}); // reverse edge having weight 1.
    }
    deque<int> dq;
    vector<int> dist(n + 1, 1e9);
    dist[1] = 0;
    dq.push_front(1);
    while (!dq.empty())
    {
        auto v = dq.front();
        dq.pop_front();
        for (auto x : adj[v])
        {
            if (dist[x[0]] > dist[v] + x[1])
            {
                dist[x[0]] = dist[v] + x[1];
                if (x[1])
                    dq.push_back(x[0]);
                else
                    dq.push_front(x[0]);
            }
        }
    }
    if (dist[n] == 1e9)
        cout << -1 << endl;
    else
        cout << dist[n] << endl;
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
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}
