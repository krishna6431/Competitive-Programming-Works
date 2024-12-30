#include <bits/stdc++.h>
using namespace std;

// Function to detect a cycle in an undirected graph using DFS
bool cycleInUndirectedGraph(int node, vector<int> gr[], vector<bool> &vis, int par)
{
    vis[node] = true; // Mark the current node as visited

    // Traverse all neighbors of the current node
    for (auto child : gr[node])
    {
        if (!vis[child])
        {                                                     // If the neighbor is not visited
            if (cycleInUndirectedGraph(child, gr, vis, node)) // Recur for the neighbor
                return true;                                  // Cycle detected
        }
        else if (child != par)
        {                // If the neighbor is visited and not the parent
            return true; // Cycle detected
        }
    }

    return false;
}

// Function to check if an undirected graph contains a cycle
bool isCycle(int V, vector<int> gr[])
{
    vector<bool> vis(V, false); // Visited array to track visited nodes

    // Perform DFS for all unvisited nodes
    for (int node = 0; node < V; node++)
    {
        if (!vis[node])
        {
            if (cycleInUndirectedGraph(node, gr, vis, -1)) // Start DFS with parent as -1
                return true;                               // Cycle detected
        }
    }

    return false; // No cycle found
}

int main()
{
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<int> gr[V]; // Adjacency list representation of the graph

    cout << "Enter the edges (u v) where u and v are connected:" << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v); // Add edge u -> v
        gr[v].push_back(u); // Add edge v -> u (undirected graph)
    }

    if (isCycle(V, gr))
    {
        cout << "The graph contains a cycle." << endl;
    }
    else
    {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}
