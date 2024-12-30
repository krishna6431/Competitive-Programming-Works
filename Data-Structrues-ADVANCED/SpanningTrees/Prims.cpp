#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define pb push_back
#define nl "\n"

// Prim's Algorithm to find the Minimum Spanning Tree (MST)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<pll> gr[n + 1]; // Adjacency list to store the graph
    cout << "Enter the edges (u v w) where u and v are nodes and w is weight:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        gr[x].pb({y, w}); // Add edge x -> y with weight w
        gr[y].pb({x, w}); // Add edge y -> x with weight w (undirected graph)
    }

    vector<bool> vis(n + 1, false);                    // Visited array to track processed nodes
    priority_queue<pll, vector<pll>, greater<pll>> pq; // Min-heap to store {weight, node}

    pq.push({0, 1}); // Start from node 1 with weight 0
    ll mst = 0;      // Total weight of the MST

    cout << "Edges in the MST:" << endl;
    while (!pq.empty())
    {
        pll best = pq.top();
        pq.pop();

        ll wt = best.first;  // Weight of the edge
        ll to = best.second; // Node to which the edge connects

        if (vis[to]) // Skip if the node is already visited
            continue;

        mst += wt;      // Add the weight of the edge to MST
        vis[to] = true; // Mark the node as visited

        cout << "Node: " << to << ", Edge Weight: " << wt << nl;

        // Push all neighboring edges into the priority queue
        for (auto x : gr[to])
        {
            if (!vis[x.first])
            { // If the neighbor is not visited
                pq.push({x.second, x.first});
            }
        }
    }

    cout << "Total weight of MST: " << mst << nl;
    return 0;
}
