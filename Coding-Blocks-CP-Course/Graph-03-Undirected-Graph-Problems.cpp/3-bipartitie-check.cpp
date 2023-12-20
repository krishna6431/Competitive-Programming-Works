// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
template <typename T>
class Graph
{
public:
    T v;
    list<T> *edge;

    Graph(T v)
    {
        this->v = v;
        this->edge = new list<T>[v];
    }

    void addEdge(T u, T v)
    {
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    void printGraph()
    {
        for (T v = 0; v < this->v; v++)
        {
            cout << v << " is Connected: ";
            for (auto x : this->edge[v])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    void bfs(T src)
    {
        bool *visited = new bool[this->v]{false};
        queue<T> q;
        q.push(src);
        visited[src] = true;
        cout << "BFS Traversal" << endl;
        while (!q.empty())
        {
            T currVertex = q.front();
            q.pop();
            cout << currVertex << " ";
            for (T neighbour : edge[currVertex])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        cout << endl;
    }

    bool dfsHelper(T src, T parent, bool *visited)
    {
        visited[src] = true;
        for (auto neighbour : edge[src])
        {
            if (!visited[neighbour])
            {
                return dfsHelper(neighbour, src, visited);
            }
            else if (neighbour != parent)
            {
                return true;
            }
        }
        return false;
    }

    void dfs(T src, T parent)
    {
        bool *visited = new bool[this->v]{false};
        bool ans = dfsHelper(src, parent, visited);
        cout << ans << endl;
    }

    int solve(int node, int *visited, int parent, int color)
    {
        visited[node] = color;
        for (auto neighbour : this->edge[node])
        {
            if (visited[neighbour] == 0)
            {
                int subProblem = solve(neighbour, visited, node, 3 - color);
                if (subProblem == 0)
                {
                    return 0;
                }
            }
            else if (neighbour != parent && visited[neighbour] == color)
            {
                return 0;
            }
        }
        return true;
    }

    int isBipartite(int src, int n)
    {
        int visited[n] = {0};
        int color = 1;
        return solve(0, visited, -1, color);
    }
};

int main()
{
    Graph<int> graph(5);
    graph.addEdge(0, 3);
    graph.addEdge(0, 2);
    graph.addEdge(3, 1);
    graph.addEdge(1, 2);
    graph.printGraph();
    graph.dfs(0, -1);
    cout << graph.isBipartite(0, 4) << endl;
    return 0;
}