// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i < end; i++)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// CODE WRITTEN BY KRISHNA_6431
vector<int> bfsOfGraph(int v, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.pb(node);
                for (auto itr : adj[node])
                {
                    if (!vis[itr])
                    {
                        q.push(itr);
                        vis[itr] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;

    // Declare adjacency list
    vector<int> adj[n + 1];

    // take edges as input
    for (int i = 0; i < m; i++)
    {
        // for undirected graph
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int> ans = bfsOfGraph(n, adj);
    for (auto itr : ans)
    {
        cout << itr << " ";
    }
    cout << endl;
    return 0;
}
