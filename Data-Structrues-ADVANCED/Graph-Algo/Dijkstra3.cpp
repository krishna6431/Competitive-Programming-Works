#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define N 100005
const ll INF = 1e18;

ll arrival[N], departure[N], vis[N], parent[N];
vector<pll> gr[N]; // Adjacency list: node -> {neighbor, weight}
ll n, m;           // Number of nodes and edges

// Dijkstra's Algorithm to find the shortest path from source to destination
ll dijkstras(ll source, ll destination)
{
    // Initialize arrays
    for (ll i = 0; i <= n; i++)
    {
        arrival[i] = INF;
        departure[i] = INF;
        vis[i] = 0;
        parent[i] = 0;
    }

    arrival[source] = 0; // Distance to the source is 0
    set<pll> s;          // Min-heap using set {distance, node}
    s.insert({0, source});

    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);

        ll curNode = x.second;
        vis[curNode] = 1;
        departure[curNode] = arrival[curNode];

        // Traverse all neighbors of the current node
        for (auto it : gr[curNode])
        {
            ll neighbor = it.first;
            ll weight = it.second;

            if (arrival[neighbor] > departure[curNode] + weight)
            {
                s.erase({arrival[neighbor], neighbor});
                arrival[neighbor] = departure[curNode] + weight;
                s.insert({arrival[neighbor], neighbor});
                parent[neighbor] = curNode; // Update parent for path reconstruction
            }
        }
    }

    if (!vis[destination])
    {
        cout << "-1" << endl; // If destination is not reachable
        return -1;
    }

    // Reconstruct and print the shortest path
    vector<ll> path;
    ll v = destination;
    while (v)
    {
        path.push_back(v);
        v = parent[v];
    }
    reverse(path.begin(), path.end());

    cout << "Shortest Path: ";
    for (auto it : path)
        cout << it << " ";
    cout << endl;

    cout << "Shortest Distance: " << arrival[destination] << endl;
    return arrival[destination];
}

int main()
{
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter the edges (u v w) where u and v are nodes and w is weight:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        gr[u].push_back({v, w}); // Add edge u -> v with weight w
        gr[v].push_back({u, w}); // Add edge v -> u with weight w (for undirected graph)
    }

    ll source, destination;
    cout << "Enter the source node: ";
    cin >> source;
    cout << "Enter the destination node: ";
    cin >> destination;

    dijkstras(source, destination); // Run Dijkstra's algorithm

    return 0;
}
