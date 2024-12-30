#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vl vector<ll>
#define pb push_back
#define nl "\n"

const ll N = 100009;
ll n, m, sq, lvl[N], vis[N], ind[N];
vl gr[N]; // Adjacency list for the graph
vl v;     // Stack to store the current path during DFS

void dfs(ll node, ll par)
{
    vis[node] = 1; // Mark the node as visited
    v.pb(node);    // Add the node to the current path

    for (auto ne : gr[node])
    {
        if (ne == par) // Skip the parent node
            continue;

        if (vis[ne] == 0)
        {                            // If the neighbor is not visited
            lvl[ne] = lvl[node] + 1; // Set the level of the neighbor
            dfs(ne, node);           // Recur for the neighbor
        }
        else
        { // If it is a back edge
            if (lvl[node] - lvl[ne] + 1 >= sq)
            {                    // Check cycle length
                cout << 2 << nl; // Output 2 if a cycle is found
                ll ct = lvl[node] - lvl[ne] + 1;
                cout << ct << nl;
                while (ct--)
                {
                    cout << v.back() << " "; // Print nodes in the cycle
                    v.pop_back();
                }
                exit(0); // Exit after finding a cycle
            }
        }
    }

    v.pop_back(); // Remove the current node from the path

    if (ind[node] == 0)
    { // Mark independent nodes
        for (auto ne : gr[node])
            ind[ne] = 1;
    }
}

void solve()
{
    cin >> n >> m;

    sq = ceil(sqrt(n)); // Calculate square root of n

    for (ll i = 1; i <= m; i++)
    {
        ll a, b;
        cin >> a >> b;

        gr[a].pb(b); // Add edge a -> b
        gr[b].pb(a); // Add edge b -> a (undirected graph)
    }

    lvl[1] = 1;
    dfs(1, 0); // Start DFS from node 1 with parent as 0

    cout << 1 << nl; // If no cycle is found, output independent set
    ll cp = sq;
    for (ll i = 1; i <= n; i++)
    {
        if (ind[i] == 1)
            continue;
        if (cp == 0)
            break;
        cout << i << " ";
        cp--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
