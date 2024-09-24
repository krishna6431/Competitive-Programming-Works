#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int maxDistance = 0;
int farthestNode = 0;

void dfs(int node, int parent, int depth)
{
    if (depth > maxDistance)
    {
        // cout << "Coming Here" << endl;
        maxDistance = depth;
        farthestNode = node;
    }
    for (int v : g[node])
    {
        if (v != parent)
        {
            dfs(v, node, depth + 1);
        }
    }
}

int findTreeDiameter(int n)
{
    dfs(1, -1, 0);
    // cout << "Max Distance: " << maxDistance << endl;
    maxDistance = 0;
    dfs(farthestNode, -1, 0);
    // cout << maxDistance << endl;
    return maxDistance;
}

int main()
{
    int n;
    cin >> n;
    g.resize(n + 5);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int diameter = findTreeDiameter(n);
    cout << diameter << endl;

    return 0;
}