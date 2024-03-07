#include <bits/stdc++.h>
using namespace std;

vector<int> gp;
vector<vector<int>> graph;
vector<int> dist;

void bfs(int node, int n, int s)
{
    queue<int> q;
    vector<bool> visited(n + 1, false);
    set<int> st;
    st.insert(gp[node]);
    q.push(node);
    visited[node] = true;
    int ans = 0;
    int level = 1;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            int u = q.front();
            q.pop();
            for (int v : graph[u])
            {
                if (!visited[v])
                {
                    q.push(v);
                    visited[v] = true;
                    if (st.find(gp[v]) == st.end() and st.size() < s)
                    {
                        st.insert(gp[v]);
                        ans += level;
                    }
                    if (st.size() == s)
                    {
                        dist[node] = ans;
                        return;
                    }
                }
            }
        }
        level++;
    }
    dist[node] = ans;
}

int main()
{
    int n, m, k, s;
    cin >> n >> m >> k >> s;

    gp.resize(n + 1);
    graph.resize(n + 1);
    dist.resize(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> gp[i];
    }

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i)
    {
        bfs(i, n, s);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}
