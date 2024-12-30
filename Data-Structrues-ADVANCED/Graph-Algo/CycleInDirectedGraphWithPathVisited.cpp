#include <bits/stdc++.h>
using namespace std;

// Function to detect a cycle in a directed graph using DFS
bool cycleInDirectedGraph(int node, vector<int> gr[], vector<bool> &visited, vector<bool> &pathVisited)
{
    visited[node] = true;     // Mark the node as visited
    pathVisited[node] = true; // Mark the node as part of the current path

    // Traverse all neighbors of the current node
    for (auto child : gr[node])
    {
        if (!visited[child])
        { // If the neighbor is not visited
            if (cycleInDirectedGraph(child, gr, visited, pathVisited))
                return true; // Cycle detected
        }
        else if (pathVisited[child])
        {
            return true; // Back edge found, cycle detected
        }
    }

    pathVisited[node] = false; // Remove the node from the current path
    return false;
}

// Function to check if a directed graph contains a cycle
bool isCyclic(int V, vector<int> gr[])
{
    vector<bool> visited(V, false);     // Tracks whether a node has been visited
    vector<bool> pathVisited(V, false); // Tracks nodes in the current DFS path

    // Perform DFS for all unvisited nodes
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (cycleInDirectedGraph(i, gr, visited, pathVisited))
                return true; // Cycle detected
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

    cout << "Enter the edges (u v) where u -> v:" << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v); // Add directed edge u -> v
    }

    if (isCyclic(V, gr))
    {
        cout << "The graph contains a cycle." << endl;
    }
    else
    {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}
