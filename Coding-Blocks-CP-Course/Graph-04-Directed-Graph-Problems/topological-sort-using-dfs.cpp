#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> edge;

public:
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
};

int main()
{
    Graph<string> graph;
    graph.addEdge("Python", "Data Processing");
    graph.addEdge("Python", "PyTorch");
    graph.addEdge("Python", "ML");
    graph.addEdge("Data Processing", "ML");
    graph.addEdge("PyTorch", "DL");
    graph.addEdge("ML", "DL");
    graph.addEdge("DL", "Face Recognition AI");
    graph.addEdge("Dataset", "Face Recognition AI");
    graph.dfs();
    return 0;
}