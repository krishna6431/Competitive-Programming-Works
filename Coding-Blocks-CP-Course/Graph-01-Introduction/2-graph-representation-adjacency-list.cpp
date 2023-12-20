// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int v;
    // array of list;
    list<int> *edges;

    Graph(int v)
    {
        this->v = v;
        edges = new list<int>[v];
    }

    void addEdge(int u, int v)
    {
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    void printGraph()
    {
        for (int v = 0; v < this->v; v++)
        {
            cout << v << ": ";
            for (auto neighbour : edges[v])
            {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(1, 2);
    graph.printGraph();
    return 0;
}