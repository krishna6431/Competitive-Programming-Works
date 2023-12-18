#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int count = 0;
    int divisor = 1;

public:
    int maxKDivisibleComponents(int n, vector<vector<int>> &edges, vector<int> &values, int k)
    {
        divisor = k;
        vector<vector<int>> graph(n);
        for (auto edge : edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                int sum_values = dfs(i, graph, visited, values);
            }
        }
        cout << count << endl;
        return count;
    }

private:
    int dfs(int node, vector<vector<int>> &graph, vector<bool> &visited, vector<int> &values)
    {
        visited[node] = true;
        int sum_values = values[node];

        for (auto neighbor : graph[node])
        {
            if (!visited[neighbor])
            {

                sum_values += dfs(neighbor, graph, visited, values);
            }
        }
        if (sum_values % (this->divisor) == 0 or sum_values == 0)
        {
            this->count++;
            sum_values = 0;
        }
        return sum_values;
    }
};

int main()
{
    Solution leetcode2IDE;
    int n1 = 5;
    vector<vector<int>> edges1 = {{0, 2}, {1, 2}, {1, 3}, {2, 4}};
    vector<int> values1 = {1, 8, 1, 4, 4};
    int k1 = 6;
    int output_1 = 2;
    if (leetcode2IDE.maxKDivisibleComponents(n1, edges1, values1, k1) == output_1)
    {
        cout << "Test case 1 passed" << endl;
    }
    else
    {
        cout << "Test case 1 failed" << endl;
    }

    int n2 = 4;
    vector<vector<int>> edges2 = {{0, 1}, {1, 2}, {2, 3}};
    vector<int> values2 = {1, 2, 2, 1};
    int k2 = 2;
    int output_2 = 2;
    if (leetcode2IDE.maxKDivisibleComponents(n2, edges2, values2, k2) == output_2)
    {
        cout << "Test case 2 passed" << endl;
    }
    else
    {
        cout << "Test case 2 failed" << endl;
    }

    return 0;
}