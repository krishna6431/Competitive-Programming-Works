#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class DSU
{
public:
    vector<ll> parent, rank;

    // Constructor to initialize DSU
    DSU(ll n)
    {
        parent.resize(n);
        rank.resize(n, 0);

        // Initially, each node is its own parent
        for (ll i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    // Find function with path compression
    ll Find(ll x)
    {
        if (parent[x] != x)
        {
            parent[x] = Find(parent[x]); // Path compression
        }
        return parent[x];
    }

    // Union function with union by rank
    bool Union(ll x, ll y)
    {
        ll xset = Find(x);
        ll yset = Find(y);

        if (xset != yset)
        {
            if (rank[xset] < rank[yset])
            {
                parent[xset] = yset;
            }
            else if (rank[xset] > rank[yset])
            {
                parent[yset] = xset;
            }
            else
            {
                parent[yset] = xset;
                rank[xset]++;
            }
            return true; // Union successful
        }
        return false; // Already in the same set
    }
};

int main()
{
    // Example usage of DSU

    ll n = 7; // Number of nodes (0-based indexing)
    DSU dsu(n);

    // Perform some union operations
    dsu.Union(0, 1);
    dsu.Union(1, 2);
    dsu.Union(3, 4);
    dsu.Union(5, 6);

    // Check if two nodes are in the same component
    cout << "Are nodes 0 and 2 in the same set? " << (dsu.Find(0) == dsu.Find(2)) << endl; // Output: 1 (true)
    cout << "Are nodes 0 and 3 in the same set? " << (dsu.Find(0) == dsu.Find(3)) << endl; // Output: 0 (false)

    // Perform more union operations
    dsu.Union(2, 3);

    // Check again after union
    cout << "Are nodes 0 and 3 in the same set now? " << (dsu.Find(0) == dsu.Find(3)) << endl; // Output: 1 (true)

    return 0;
}
