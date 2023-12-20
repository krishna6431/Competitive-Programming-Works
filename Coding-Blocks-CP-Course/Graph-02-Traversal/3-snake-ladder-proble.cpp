// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int v;
    list<int> *edge;

    Graph(int v)
    {
        this->v = v;
        this->edge = new list<int>[v];
    }

    void addEdge(int u, int v)
    {
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    void printGraph()
    {
        for (int v = 0; v < this->v; v++)
        {
            cout << v << " is Connected: ";
            for (auto x : this->edge[v])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    void bfs(int src)
    {
        bool *visited = new bool[this->v]{false};
        queue<int> q;
        q.push(src);
        visited[src] = true;
        cout << "BFS Traversal" << endl;
        while (!q.empty())
        {
            int currVertex = q.front();
            q.pop();
            cout << currVertex << " ";
            for (int neighbour : edge[currVertex])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

    Remaining
};

int main()
{
    Graph graph(5);
    graph.addEdge(0, 3);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 4);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.printGraph();
    graph.bfs(0);
    return 0;
}