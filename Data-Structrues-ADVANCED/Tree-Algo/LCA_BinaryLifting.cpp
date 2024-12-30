#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

const ll N = 100009; // Maximum number of nodes
const ll maxN = 20;  // Maximum power of 2 for binary lifting
vector<ll> gr[N];    // Adjacency list for the tree
ll level[N];         // Level of each node in the tree
ll LCA[N][maxN + 1]; // Binary lifting table for LCA computation

// DFS to initialize levels and immediate parent (LCA[node][0])
void dfs(ll node, ll lvl, ll par)
{
    level[node] = lvl;
    LCA[node][0] = par;
    for (auto ch : gr[node])
    {
        if (ch != par)
        {
            dfs(ch, lvl + 1, node);
        }
    }
}

// Precompute the binary lifting table
void init(ll n)
{
    dfs(1, 0, -1); // Start DFS from node 1 (assuming 1-based indexing)
    for (ll i = 1; i <= maxN; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (LCA[j][i - 1] != -1)
            {
                ll par = LCA[j][i - 1];
                LCA[j][i] = LCA[par][i - 1];
            }
        }
    }
}

// Function to find the Lowest Common Ancestor (LCA) of two nodes
ll getLCA(ll a, ll b)
{
    if (level[b] < level[a])
        swap(a, b);

    // Bring both nodes to the same level
    ll d = level[b] - level[a];
    while (d > 0)
    {
        ll i = log2(d);
        b = LCA[b][i];
        d -= (1 << i);
    }

    if (a == b)
        return a;

    // Lift both nodes until their parents are the same
    for (ll i = maxN; i >= 0; i--)
    {
        if (LCA[a][i] != -1 && LCA[a][i] != LCA[b][i])
        {
            a = LCA[a][i];
            b = LCA[b][i];
        }
    }

    return LCA[a][0]; // Return the parent of either node
}

// Function to calculate the distance between two nodes
ll getDist(ll a, ll b)
{
    ll lca = getLCA(a, b);
    return level[a] + level[b] - 2 * level[lca];
}

int main()
{
    ll n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Clear and initialize data structures
    for (ll i = 0; i <= n; i++)
    {
        gr[i].clear();
        level[i] = 0;
        for (ll j = 0; j <= maxN; j++)
        {
            LCA[i][j] = -1;
        }
    }

    cout << "Enter the edges of the tree:" << endl;
    for (ll i = 1; i < n; i++)
    { // Tree has n-1 edges
        ll u, v;
        cin >> u >> v;
        gr[u].pb(v);
        gr[v].pb(u);
    }

    init(n); // Precompute LCA using binary lifting

    ll q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "Enter your queries in the format 'a b' to find distance between nodes a and b:" << endl;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << "Distance between " << a << " and " << b << ": " << getDist(a, b) << endl;
        cout << "Lowest Common Ancestor of " << a << " and " << b << ": " << getLCA(a, b) << endl;
    }

    return 0;
}
