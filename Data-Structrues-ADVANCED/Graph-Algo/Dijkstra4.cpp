#include <bits/stdc++.h>
using namespace std;

int N; // Total number of nodes/vertices

// Dijkstra's Algorithm to find shortest paths from a source node
// Handles negative weights by skipping them if `skip_negative` is true
auto dijkstra(int source, const vector<vector<pair<int, int>>> &adj, bool skip_negative)
{
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap {distance, node}
    unordered_map<int, int> dist;                      // Stores shortest distances
    unordered_map<int, int> parent;                    // Stores parent for path reconstruction

    // Initialize distances to infinity
    for (int i = 0; i < N; i++)
    {
        dist[i] = (int)2e9;
    }

    dist[source] = 0; // Distance to the source is 0
    pq.push({0, source});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (d > dist[node])
            continue; // Skip outdated distances

        for (const auto &neighbor : adj[node])
        {
            int nei = neighbor.first;
            int w = neighbor.second;

            if (w == -1)
            { // Handle negative weights
                if (skip_negative)
                    continue;
                w = 1; // Replace negative weight with 1
            }

            int d2 = d + w;

            if (d2 < dist[nei])
            { // Relaxation step
                dist[nei] = d2;
                parent[nei] = node;
                pq.push({d2, nei});
            }
        }
    }

    return make_pair(dist, parent);
}

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    N = n;                                 // Set the global variable for total nodes
    vector<vector<pair<int, int>>> adj(n); // Adjacency list

    cout << "Enter the edges (u v w) where u and v are nodes and w is weight:" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // Add edge u -> v with weight w
        adj[v].push_back({u, w}); // Add edge v -> u with weight w (for undirected graph)
    }

    int source, destination;
    cout << "Enter the source node: ";
    cin >> source;
    cout << "Enter the destination node: ";
    cin >> destination;

    auto [dist, parent] = dijkstra(source, adj, true); // Run Dijkstra's algorithm

    if (dist[destination] == (int)2e9)
    {
        cout << "No path exists from " << source << " to " << destination << "." << endl;
        return 0;
    }

    cout << "Shortest Distance from " << source << " to " << destination << ": " << dist[destination] << endl;

    // Reconstruct the shortest path
    vector<int> path = {destination};
    while (path.back() != source)
    {
        path.push_back(parent[path.back()]);
    }
    reverse(path.begin(), path.end());

    cout << "Shortest Path: ";
    for (auto node : path)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
