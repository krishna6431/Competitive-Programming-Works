#include <bits/stdc++.h>
using namespace std;

// Function to perform DFS traversal of a graph starting from the source node
void dfs(int src, vector<int> &vis, vector<vector<int>> &gr)
{
    vis[src] = 1;          // Mark the current node as visited
    cout << src << " -> "; // Process the current node (print it)

    // Traverse all neighbors of the current node
    for (auto child : gr[src])
    {
        if (vis[child] == 0)
        {                        // If the neighbor is not visited
            dfs(child, vis, gr); // Recur for the neighbor
        }
    }
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

    cout << "DFS Traversal starting from node " << src << ": ";
    dfs(src, vis, gr); // Perform DFS starting from `src`
    cout << "END" << endl;

    return 0;
}
