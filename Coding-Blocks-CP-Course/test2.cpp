// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>

using namespace std;

int take = 0;
void dfs(int node, pair<char, vector<int>> adj[], char color, int visited[], int par, vector<int> &ans, int parent, int flag, int &nonChromo)
{

    for (auto x : adj[node].second)
    {
        if (!visited[x] && (flag or (adj[x].first == color)))
        {
            if (flag)
            {
                if (adj[x].first != color)
                {
                    nonChromo = 1;
                }
            }
            visited[x] = 1;
            ans.push_back(x);
            dfs(x, adj, adj[x].first, visited, node, ans, parent, flag, nonChromo);
            visited[x] = 0;
            ans.pop_back();
        }
        else if (visited[x] && par != x && x == parent && (flag or (adj[x].first == color)))
        {
            take++;
            if (flag)
            {
                if (nonChromo)
                {
                    for (auto x : ans)
                    {
                        cout << x << " ";
                    }
                    cout << x << endl;
                }
            }
            else
            {
                for (auto x : ans)
                {
                    cout << x << " ";
                }
                cout << x << endl;
            }

            return;
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    pair<char, vector<int>> adj[n];
    vector<char> color(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> color[i];
    }
    cin.ignore();
    string edges;
    getline(cin, edges);
    int i = 0;
    int edgeCount = 0;
    while (edges[i] != '-')
    {
        int u = edges[i] - '0';
        i += 2;
        int v = edges[i] - '0';
        i += 3;
        if (edgeCount <= n)
            adj[edgeCount].first = color[edgeCount];
        edgeCount++;
        adj[u].second.push_back(v);
        adj[v].second.push_back(u);
    }
    cout << "Complete Graph" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << ": [";
        cout << adj[i].first << "] :";
        for (auto x : adj[i].second)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    cout << "Red SubGraph" << endl;
    for (int i = 0; i < n; i++)
    {
        if (adj[i].first == 'r')
        {
            cout << i << ": [";
            cout << adj[i].first << "] :";
            for (auto x : adj[i].second)
            {
                if (adj[x].first == 'r')
                    cout << x << " ";
            }
            cout << endl;
        }
    }
    cout << "BLue SubGraph" << endl;
    for (int i = 0; i < n; i++)
    {
        if (adj[i].first == 'b')
        {
            cout << i << ": [";
            cout << adj[i].first << "] :";
            for (auto x : adj[i].second)
            {
                if (adj[x].first == 'b')
                    cout << x << " ";
            }
            cout << endl;
        }
    }

    cout << "Red Cycle" << endl;
    int visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        if (adj[i].first == 'r')
        {
            int nonChromo = 0;
            visited[i] = 1;
            vector<int> ans;
            ans.push_back(i);
            dfs(i, adj, 'r', visited, -1, ans, parent, 0, nonChromo);
        }
    }
    take = 0;
    cout << "Blue Cycle" << endl;
    visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        if (adj[i].first == 'b')
        {
            int nonChromo = 0;
            vector<int> ans;
            ans.push_back(i);
            visited[i] = 1;
            dfs(i, adj, 'b', visited, -1, ans, parent, 0, nonChromo);
        }
    }

    cout << "Non Chromo Cycle" << endl;
    visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        vector<int> ans;
        ans.push_back(i);
        visited[i] = 1;
        int nonChromo = 0;
        dfs(i, adj, adj[i].first, visited, -1, ans, parent, 1, nonChromo);
    }
    return 0;
}