#include <iostream>
#include <vector>
using namespace std;

// code is writte by mr_krishna
typedef long long ll;
typedef vector<ll> vl;

const ll N = 200009;
vl graph[N];       // Adjacency list representation of the tree
ll subtreeSize[N]; // Subtree size of each node
ll parent[N];      // Parent of each node in the DFS tree
ll totalNodes;     // Total number of nodes in the tree

// Function to calculate the size of each subtree, including the node itself
void dfs(ll node, ll par)
{
    subtreeSize[node] = 1;
    parent[node] = par;

    for (auto neighbor : graph[node])
    {
        if (neighbor == par)
            continue;
        dfs(neighbor, node);
        subtreeSize[node] += subtreeSize[neighbor];
    }
}

// Function to find the centroid of the tree
ll findCentroid(ll node)
{
    ll currentRoot = node;
    bool isCentroid = true;

    while (isCentroid)
    {
        isCentroid = false;
        for (auto neighbor : graph[currentRoot])
        {
            if (neighbor == parent[currentRoot])
                continue;
            if (2 * subtreeSize[neighbor] > totalNodes)
            {
                currentRoot = neighbor;
                isCentroid = true;
                break;
            }
        }
    }

    for (auto neighbor : graph[currentRoot])
    {
        if (neighbor == parent[currentRoot])
            continue;
        if (2 * subtreeSize[neighbor] == totalNodes && neighbor > currentRoot)
            return neighbor;
    }

    return currentRoot;
}

int main()
{
    // Example usage
    ll n; // Number of nodes in the tree
    cin >> n;
    totalNodes = n;

    // Input edges
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Calculate subtree sizes starting from node 1 (assuming 1-based indexing)
    dfs(1, -1);

    // Find and print the centroid of the tree
    ll centroid = findCentroid(1);
    cout << "Centroid of the tree: " << centroid << endl;

    return 0;
}
