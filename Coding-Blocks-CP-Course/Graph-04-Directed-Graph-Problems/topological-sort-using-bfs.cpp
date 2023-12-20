#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> edge;

public:
    int V;
    // directed edge
    void addEdge(T x, T y)
    {
        edge[x].push_back(y);
    }

    void dfs_helper(T src, map<T, bool> &visited, list<T> &ordering)
    {
        visited[src] = true;
        for (T neighbor : edge[src])
        {
            if (!visited[neighbor])
            {
                dfs_helper(neighbor, visited, ordering);
            }
        }

        ordering.push_front(src);
        return;
    }

    void dfs()
    {
        map<T, bool> visited;
        list<T> ordering;
        for (auto p : edge)
        {
            T node = p.first;
            if (!visited[node])
            {
                dfs_helper(node, visited, ordering);
            }
        }
        for (auto x : ordering)
        {
            cout << x << "--->";
        }
        cout << "YOU ARE DONE" << endl;
    }

    void topoSortBFS()
    {
        int *indegree = new int[V];
        for (int i = 0; i < V; i++)
        {
            indegree[i] = 0;
        }

        for (auto p : edge)
        {
            int x = p.first;
            for (auto y : p.second)
            {
                indegree[y]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto neighbor : edge[node])
            {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0)
                {
                    q.push(neighbor);
                }
            }
        }
    }
};

int main()
{
    Graph<int> graph;
    graph.V = 4;
    graph.addEdge(1, 0);
    graph.addEdge(3, 0);
    graph.addEdge(2, 0);
    graph.dfs();
    return 0;
}