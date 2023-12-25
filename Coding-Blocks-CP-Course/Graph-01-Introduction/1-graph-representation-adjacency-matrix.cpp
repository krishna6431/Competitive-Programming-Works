// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n, 0));
    int e;
    cin >> e;
    int u, v;

    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;
    }
    for (auto row : graph)
    {
        for (auto elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}