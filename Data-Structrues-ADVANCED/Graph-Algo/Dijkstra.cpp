#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define N 100005
#define INF LLONG_MAX

vector<pll> gr[N]; // Adjacency list (node -> {neighbor, weight})
ll vis[N];         // Visited array
ll dis[N];         // Distance array

// Dijkstra's Algorithm to find the shortest path from source `s`
void dijkstras1(ll s, ll n)
{
    priority_queue<pll, vector<pll>, greater<pll>> pq; // Min-heap {distance, node}
    pq.push({0, s});                                   // Start with source node and distance 0

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = INF; // Initialize distances to infinity
        vis[i] = 0;   // Mark all nodes as unvisited
    }
    dis[s] = 0; // Distance to the source is 0

    while (!pq.empty())
    {
        pll best = pq.top();
        pq.pop();

        ll d = best.first;   // Distance to the current node
        ll to = best.second; // Current node

        if (vis[to])
            continue;

        vis[to] = 1; // Mark the current node as visited

        for (auto x : gr[to])
        { // Traverse neighbors of the current node
            if (!vis[x.first] && dis[to] + x.second < dis[x.first])
            {
                dis[x.first] = dis[to] + x.second; // Update distance
                pq.push({dis[x.first], x.first});  // Push the updated distance and node into the priority queue
            }
        }
    }
}

int main()
{
    ll n, m;
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

    ll src;
    cout << "Enter the source node: ";
    cin >> src;

    dijkstras1(src, n); // Run Dijkstra's algorithm from the source node

    cout << "Shortest distances from node " << src << ":" << endl;
    for (ll i = 1; i <= n; i++)
    {
        if (dis[i] == INF)
            cout << "Node " << i << ": INF" << endl;
        else
            cout << "Node " << i << ": " << dis[i] << endl;
    }

    return 0;
}
