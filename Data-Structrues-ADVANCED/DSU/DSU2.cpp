#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class DSU
{
public:
    // When data[x] < 0, x is a root and -data[x] is its tree size.
    // When data[x] >= 0, data[x] is x's parent.
    // edges[find(i)] stores the number of edges in the component whose root is i.
    vector<ll> data;
    vector<ll> edges;
    ll components;

    // Constructor to initialize DSU
    DSU(ll n)
    {
        data.assign(n + 1, -1); // Initialize all nodes as roots with size -1
        edges.assign(n + 1, 0); // Initialize edge count for each component as 0
        components = n;         // Initially, each node is its own component
    }

    // Find function with path compression
    ll find(ll x)
    {
        return data[x] < 0 ? x : data[x] = find(data[x]);
    }

    // Get the size of the component containing node x
    ll get_size(ll x)
    {
        return -data[find(x)];
    }

    // Unite two components containing nodes x and y
    bool unite(ll x, ll y)
    {
        x = find(x);
        y = find(y);

        if (x == y)
        { // If already in the same component, just add an edge
            edges[x]++;
            return false;
        }

        // Union by size: Always attach the smaller tree under the larger tree
        if (-data[x] < -data[y])
            swap(x, y);

        data[x] += data[y];   // Update size of the new root
        data[y] = x;          // Make x the parent of y
        edges[x] += edges[y]; // Merge edge counts
        edges[x]++;           // Add the new edge between x and y
        components--;         // Reduce the number of components
        return true;
    }
};

int main()
{
    // Example usage of DSU

    ll n = 6; // Number of nodes (1-based indexing)
    DSU dsu(n);

    vector<pair<ll, ll>> edgeList = {{1, 2}, {2, 3}, {4, 5}, {5, 6}, {3, 4}};

    // Unite nodes using edges from the edge list
    for (auto edge : edgeList)
    {
        dsu.unite(edge.first, edge.second);
    }

    // Check if two nodes are in the same component
    cout << "Are nodes 1 and 3 in the same set? " << (dsu.find(1) == dsu.find(3)) << endl; // Output: 1 (true)
    cout << "Are nodes 1 and 6 in the same set? " << (dsu.find(1) == dsu.find(6)) << endl; // Output: 1 (true)
    cout << "Are nodes 1 and 4 in the same set? " << (dsu.find(1) == dsu.find(4)) << endl; // Output: 1 (true)

    // Get size of a component containing a specific node
    cout << "Size of component containing node 3: " << dsu.get_size(3) << endl;

    // Get number of edges in a component containing a specific node
    cout << "Number of edges in component containing node 5: " << dsu.edges[dsu.find(5)] << endl;

    return 0;
}
