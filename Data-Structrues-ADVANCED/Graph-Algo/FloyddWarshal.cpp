#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vl vector<ll>
#define inf 1e12
const ll N = 509;

vector<vl> gr(N, vl(N, inf)); // Graph represented as an adjacency matrix
ll n, m;                      // Number of nodes and edges

// Floyd-Warshall Algorithm to find all-pairs shortest paths
void floyd_warshall1()
{
    // Distance from a node to itself is 0
    for (ll i = 1; i <= n; i++)
    {
        gr[i][i] = 0;
    }

    // Update shortest paths using intermediate nodes
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (gr[i][k] < inf && gr[k][j] < inf)
                {
                    gr[i][j] = min(gr[i][j], gr[i][k] + gr[k][j]);
                }
            }
        }
    }
}

int main()
{
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter the edges (u v w) where u and v are nodes and w is weight:" << endl;
    while (m--)
    {
        ll u, v, w;
        cin >> u >> v >> w;

        // Update the graph with the minimum weight for each edge
        gr[u][v] = min(gr[u][v], w);
        gr[v][u] = min(gr[v][u], w); // Remove this line if the graph is directed
    }

    floyd_warshall1(); // Run Floyd-Warshall Algorithm

    cout << "Shortest distance matrix:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (gr[i][j] == inf)
                cout << "INF ";
            else
                cout << gr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
