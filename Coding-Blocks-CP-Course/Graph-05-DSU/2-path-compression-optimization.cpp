// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> edge;

public:
    Graph(int V)
    {
        this->V = V;
    }

    void addEdge(int u, int v)
    {
        edge.push_back(make_pair(u, v));
    }
    // FindSet
    int find(int i, int *parent)
    {
        if (parent[i] == -1)
        {
            return i;
        }
        // path compression optimization
        return parent[i] = find(parent[i], parent);
    }

    // Union
    void union_set(int x, int y, int *parent)
    {
        int s1 = find(x, parent);
        int s2 = find(y, parent);
        if (s1 != s2)
        {
            parent[s2] = s1;
        }
        return;
    }
    // cycle detection algorithm
    bool containsCycle()
    {
        // DSU Logic to check Cycle
        int *parent = new int[V + 1]{-1};
        // iterate over edge list
        for (auto x : edge)
        {
            int u = x.first;
            int v = x.second;
            int s1 = find(u, parent);
            int s2 = find(v, parent);

            if (s1 != s2)
            {
                union_set(u, v, parent);
            }
            else
            {
                return true;
            }
        }
        delete[] parent;
        return false;
    }
};

int main()
{
    Graph graph(4);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 1);
    cout << graph.containsCycle() << endl;
    return 0;
}