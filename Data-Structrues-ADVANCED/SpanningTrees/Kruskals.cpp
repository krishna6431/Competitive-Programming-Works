#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define nl "\n"

// Disjoint Set Union (DSU) class
class DSU
{
public:
    vector<ll> Parent, Rank;

    // Constructor to initialize DSU
    DSU(ll n)
    {
        Parent.resize(n);
        Rank.resize(n, 0);
        for (ll i = 0; i < n; i++)
            Parent[i] = i;
    }

    // Find function with path compression
    ll Find(ll x)
    {
        return Parent[x] = (Parent[x] == x ? x : Find(Parent[x]));
    }

    // Union function with union by rank
    bool Union(ll x, ll y)
    {
        ll xset = Find(x), yset = Find(y);
        if (xset != yset)
        {
            if (Rank[xset] < Rank[yset])
                Parent[xset] = yset;
            else if (Rank[xset] > Rank[yset])
                Parent[yset] = xset;
            else
            {
                Parent[yset] = xset;
                Rank[xset]++;
            }
            return true;
        }
        return false;
    }
};

// Kruskal's Algorithm to find the Minimum Spanning Tree (MST)
void kruskalsMST()
{
    ll n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<ll>> edges(m); // {weight, node1, node2}
    cout << "Enter the edges (u v w) where u and v are nodes and w is weight:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        u--; // Convert to 0-based indexing
        v--;
        edges[i] = {w, u, v};
    }

    // Sort edges by weight
    sort(all(edges));

    DSU dsu(n); // Initialize DSU for `n` nodes
    ll mstWeight = 0;

    cout << "Edges in the MST:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll w = edges[i][0];
        ll u = edges[i][1];
        ll v = edges[i][2];

        // If `u` and `v` are in different components, add the edge to the MST
        if (dsu.Find(u) != dsu.Find(v))
        {
            dsu.Union(u, v);
            mstWeight += w;
            cout << u + 1 << " - " << v + 1 << " : " << w << endl; // Print edge in MST
        }
    }

    cout << "Total weight of MST: " << mstWeight << nl;
}

int main()
{
    kruskalsMST();
    return 0;
}
