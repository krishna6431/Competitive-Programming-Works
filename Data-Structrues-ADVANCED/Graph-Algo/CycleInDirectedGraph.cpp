#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vvl vector<vector<ll>>
#define pb push_back

const ll N = 200009; // Maximum number of nodes
ll n, m;             // Number of nodes and directed edges
vvl gr[N];           // Adjacency list: node -> (neighbor, edge index)
ll col[N];           // Color array: 0 (not visited), 1 (visiting), 2 (visited)
ll res[N];           // Edge classification: 1 (forward edge), 2 (back edge)
bool cyc = false;    // Indicates if there's a cycle in the graph

// DFS function to detect cycles and classify edges
void dfs(ll node)
{
    col[node] = 1; // Mark the node as visiting (Gray)
    for (auto p : gr[node])
    {
        ll ne = p[0], edg = p[1]; // Neighbor and edge index
        if (col[ne] == 0)
        { // If neighbor is not visited
            dfs(ne);
            res[edg] = 1; // Classify as forward edge
        }
        else if (col[ne] == 2)
        {                 // If neighbor is fully processed
            res[edg] = 1; // Classify as forward edge
        }
        else
        {                 // If neighbor is still visiting (Gray)
            res[edg] = 2; // Classify as back edge
            cyc = true;   // Cycle detected
        }
    }
    col[node] = 2; // Mark the node as fully processed (Black)
}

int main()
{
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter the edges (u v) where u -> v:" << endl;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        gr[u].pb({v, i}); // Add directed edge u -> v with index i
    }

    // Initialize color array and result array
    memset(col, 0, sizeof(col));
    memset(res, 0, sizeof(res));

    // Perform DFS for all unvisited nodes
    for (ll i = 1; i <= n; i++)
    {
        if (col[i] == 0)
        {
            dfs(i);
        }
    }

    if (cyc)
    {
        cout << "The graph contains a cycle." << endl;
    }
    else
    {
        cout << "The graph does not contain a cycle." << endl;
    }

    cout << "Edge classifications:" << endl;
    for (ll i = 0; i < m; i++)
    {
        if (res[i] == 1)
            cout << "Edge " << i + 1 << ": Forward Edge" << endl;
        else if (res[i] == 2)
            cout << "Edge " << i + 1 << ": Back Edge" << endl;
    }

    return 0;
}
