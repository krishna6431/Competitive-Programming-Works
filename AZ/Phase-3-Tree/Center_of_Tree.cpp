#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> g;
vector<int> degree;

vector<int> findTreeCenters(int n)
{
    queue<int> leaves;
    for (int i = 1; i <= n; ++i)
    {
        if (degree[i] == 1)
        {
            leaves.push(i);
        }
    }

    int count = n;
    while (count > 2)
    {
        int leavesCount = leaves.size();
        count -= leavesCount;
        for (int i = 0; i < leavesCount; ++i)
        {
            int leaf = leaves.front();
            leaves.pop();
            for (int neighbor : g[leaf])
            {
                degree[neighbor]--;
                if (degree[neighbor] == 1)
                {
                    leaves.push(neighbor);
                }
            }
        }
    }

    vector<int> centers;
    while (!leaves.empty())
    {
        centers.push_back(leaves.front());
        leaves.pop();
    }
    return centers;
}

int main()
{
    int n;
    cin >> n;

    g.resize(n + 1);
    degree.resize(n + 1, 0);

    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }

    vector<int> centers = findTreeCenters(n);
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (centers.size() >= 2)
    {
        cout << centers[0] << " " << centers[1] << endl;
    }
    else
    {
        cout << centers[0] << endl;
    }
    return 0;
}
