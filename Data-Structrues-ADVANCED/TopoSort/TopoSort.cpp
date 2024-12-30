#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vl vector<ll>
#define pb push_back

const ll N = 200009; // Maximum number of nodes (adjust as needed)
vector<ll> gr[N];    // Adjacency list representation of the graph
ll vis1[N];          // Visited array: 0 (White), 1 (Gray), 2 (Black)
vl order;            // Stores the topological order

// DFS function for topological sort with cycle detection
void dfs1(ll src)
{
    vis1[src] = 1; // Mark the node as Gray (currently visiting)
    for (auto ne : gr[src])
    {
        if (vis1[ne] == 1)
        { // If a Gray node is found, there's a cycle
            cout << "The graph is NOT a DAG (cycle detected)." << endl;
            exit(0); // Exit the program as the graph is not a DAG
        }
        if (vis1[ne] == 0)
        { // If the neighbor is White, visit it
            dfs1(ne);
        }
    }
    order.pb(src); // Add the node to the topological order
    vis1[src] = 2; // Mark the node as Black (fully processed)
}

int main()
{
    ll n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter the edges (u v) where u -> v:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        gr[u].pb(v); // Add a directed edge from u to v
    }

    // Perform DFS for all unvisited nodes
    for (ll i = 1; i <= n; i++)
    {
        if (!vis1[i])
        {
            dfs1(i);
        }
    }

    reverse(order.begin(), order.end()); // Reverse to get the correct topological order

    cout << "Topological Order of the Graph:" << endl;
    for (auto node : order)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
