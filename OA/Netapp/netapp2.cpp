#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
int cherries[MAXN];
bool visited[MAXN];
int parent[MAXN];

void resetVisited(int N)
{
    fill(visited, visited + N + 1, false);
}

void bfs(int start, int N)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    parent[start] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

vector<int> findPath(int u, int v)
{
    vector<int> path;
    for (int cur = v; cur != -1; cur = parent[cur])
    {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end());
    return path;
}

bool canRemoveAllCherries(int N)
{
    for (int u = 1; u <= N; ++u)
    {
        if (cherries[u] > 0)
        {
            for (int v = u + 1; v <= N; ++v)
            {
                if (cherries[v] > 0)
                {
                    resetVisited(N);
                    bfs(u, N);
                    if (!visited[v])
                        continue;
                    vector<int> path = findPath(u, v);
                    bool validPath = true;
                    for (int node : path)
                    {
                        if (cherries[node] == 0)
                        {
                            validPath = false;
                            break;
                        }
                    }
                    if (validPath)
                    {
                        for (int node : path)
                        {
                            --cherries[node];
                        }
                        return canRemoveAllCherries(N);
                    }
                }
            }
        }
    }
    for (int u = 1; u <= N; ++u)
    {
        if (cherries[u] > 0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cin >> cherries[i];
    }

    for (int i = 1; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if (canRemoveAllCherries(N))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
