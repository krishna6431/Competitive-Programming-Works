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
        int *distance = new int[this->v];
        for (int i = 0; i < this->v; i++)
        {
            distance[i] = INT_MAX;
        }
        queue<T> q;
        q.push(src);
        distance[src] = 0;
        while (!q.empty())
        {
            T currVertex = q.front();
            q.pop();
            for (T neighbour : edge[currVertex])
            {
                if (distance[neighbour] == INT_MAX)
                {
                    q.push(neighbour);
                    distance[neighbour] = min(distance[neighbour], 1 + distance[currVertex]);
                    cout << neighbour << " is " << distance[neighbour] << " Far From " << src << endl;
                }
            }
        }
    }
};

int main()
{
    Graph<int> graph(5);
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