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
    }

    void solveProblem(T src)
    {
        bool *visited = new bool[this->v]{false};
        ll *level = new ll[this->v]{-1};
        queue<T> q;
        ll depth = 0;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            ll sz = q.size();
            for (ll i = 0; i < sz; i++)
            {
                T currVertex = q.front();
                q.pop();
                level[currVertex] = depth;
                for (T neighbour : edge[currVertex])
                {
                    if (!visited[neighbour])
                    {
                        q.push(neighbour);
                        visited[neighbour] = true;
                    }
                }
            }
            depth++;
        }

        for (int i = 1; i < this->v; i++)
        {
            if (i == src)
                continue;
            if (level[i] != 0)
                cout << level[i] * 6 << " ";
            else
            {
                cout << -1 << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        ll n, m;
        cin >> n >> m;
        Graph<ll> graph(n + 1);
        for (ll i = 0; i < m; i++)
        {
            ll u, v;
            cin >> u >> v;
            graph.addEdge(u, v);
        }
        ll src;
        cin >> src;
        graph.solveProblem(src);
    }

    return 0;
}