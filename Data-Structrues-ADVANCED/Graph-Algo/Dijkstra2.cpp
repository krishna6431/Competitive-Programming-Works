#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define INF LLONG_MAX

const ll N = 1004;
ll d[N][N];        // Distance matrix: d[s][t] stores the shortest distance from s to t
ll vis[N][N];      // Visited matrix: vis[s][t] indicates if node t has been processed for source s
vector<pll> gr[N]; // Adjacency list: node -> {neighbor, weight}
ll n, m, k;        // Number of nodes, edges, and any additional parameters

// Dijkstra's Algorithm to compute shortest paths from source `s` to all nodes
void dijkstras2(ll s)
{
    priority_queue<pll, vector<pll>, greater<pll>> pq; // Min-heap {distance, node}
    pq.push({0, s});                                   // Start with source node and distance 0

    while (!pq.empty())
    {
        pll best = pq.top();
        pq.pop();

        ll dis = best.first; // Distance to the current node
        ll to = best.second; // Current node

        if (vis[s][to] == 1)
            continue; // Skip if already visited

        d[s][to] = dis; // Update distance from source `s` to `to`
        vis[s][to] = 1; // Mark the node as visited for source `s`

        for (auto x : gr[to])
        { // Traverse neighbors of the current node
            if (vis[s][x.first] == 0)
            {                                       // If neighbor is not visited
                pq.push({dis + x.second, x.first}); // Push updated distance and neighbor into the priority queue
            }
        }
    }
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
        gr[u].push_back({v, w}); // Add directed edge u -> v with weight w
        gr[v].push_back({u, w}); // Add edge v -> u with weight w (for undirected graph)
    }

    memset(d, INF, sizeof(d));   // Initialize all distances to infinity
    memset(vis, 0, sizeof(vis)); // Initialize all nodes as unvisited

    cout << "Enter the source node: ";
    ll src;
    cin >> src;

    dijkstras2(src); // Compute shortest paths from the source node

    cout << "Shortest distances from node " << src << ":" << endl;
    for (ll i = 1; i <= n; i++)
    {
        if (d[src][i] == INF)
            cout << "Node " << i << ": INF" << endl;
        else
            cout << "Node " << i << ": " << d[src][i] << endl;
    }

    return 0;
}
