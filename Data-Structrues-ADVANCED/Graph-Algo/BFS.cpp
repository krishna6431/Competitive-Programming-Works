#include <bits/stdc++.h>
using namespace std;

// Function to perform BFS traversal of a graph starting from the source node
void bfsOfGraph(int src, vector<int> &vis, vector<vector<int>> &gr)
{
    queue<int> q; // Queue to process nodes level by level
    q.push(src);  // Push the source node into the queue
    vis[src] = 1; // Mark the source node as visited

    cout << "BFS Traversal starting from node " << src << ": ";

    while (!q.empty())
    {
        int cur = q.front(); // Get the front node in the queue
        q.pop();             // Remove it from the queue
        cout << cur << " ";  // Process the current node

        // Process all neighbors of the current node
        for (int child : gr[cur])
        {
            if (vis[child] == 0)
            {                   // If the neighbor is not visited
                q.push(child);  // Push it into the queue
                vis[child] = 1; // Mark it as visited
            }
        }
    }
    cout << endl;
}

int main()
{
    int n, m; // Number of nodes and edges
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> gr(n); // Adjacency list representation of the graph
    vector<int> vis(n, 0);     // Visited array to track visited nodes

    cout << "Enter the edges (u v) where u and v are connected:" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v); // Add edge u -> v
        gr[v].push_back(u); // Add edge v -> u (for undirected graph)
    }

    int src;
    cout << "Enter the source node: ";
    cin >> src;

    bfsOfGraph(src, vis, gr); // Perform BFS starting from `src`

    return 0;
}
