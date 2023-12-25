#include <bits/stdc++.h>
using namespace std;

int take = 0;

class ll
{
public:
    int v;
    ll *next;
    ll(int v)
    {
        this->v = v;
        this->next = NULL;
    }
};

class adjacency
{
public:
    char color;
    ll *adjPtr = NULL;
    ll *rear;
};

void dfs(int node, adjacency adj[], char color, int visited[], int par, int ans[], int itr, int parent, int flag, int &nonChromo)
{

    // for (auto x : adj[node].second)
    // {
    ll *temp = adj[node].adjPtr;
    while (temp != NULL)
    {
        int x = temp->v;
        if (!visited[x] && (flag or (adj[x].color == color)))
        {
            if (flag)
            {
                if (adj[x].color != color)
                {
                    nonChromo = 1;
                }
            }
            visited[x] = 1;
            ans[itr] = x;
            itr++;
            dfs(x, adj, adj[x].color, visited, node, ans, itr, parent, flag, nonChromo);
            visited[x] = 0;
            itr--;
        }
        else if (visited[x] && par != x && x == parent && (flag or (adj[x].color == color)))
        {
            take++;
            if (flag)
            {
                if (nonChromo)
                {
                    for (int ii = 0; ii < itr; ii++)
                    {
                        cout << ans[ii] << " ";
                    }
                    cout << x << " ";
                    cout << endl;
                }
            }
            else
            {
                for (int ii = 0; ii < itr; ii++)
                {
                    cout << ans[ii] << " ";
                }
                cout << x << " ";
                cout << endl;
            }
        }
        temp = temp->next;
    }

    return;
    // }
}

int main()
{
    int n;
    cin >> n;
    adjacency adj[n];
    char color[n];
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
            adj[edgeCount].color = color[edgeCount];
        edgeCount++;
        ll *newNode1 = new ll(v);
        if (adj[u].adjPtr == NULL)
        {
            adj[u].adjPtr = newNode1;
            adj[u].rear = newNode1;
        }
        else
        {
            (adj[u].rear)->next = newNode1;
            adj[u].rear = newNode1;
        }
        ll *newNode2 = new ll(u);
        if (adj[v].adjPtr == NULL)
        {
            adj[v].adjPtr = newNode2;
            adj[v].rear = newNode2;
        }
        else
        {
            (adj[v].rear)->next = newNode2;
            adj[v].rear = newNode2;
        }
    }
    cout << "Complete Graph" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << ": [";
        cout << adj[i].color << "] :";
        ll *temp = adj[i].adjPtr;
        while (temp != NULL)
        {
            cout << temp->v << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    cout << "Red SubGraph" << endl;
    for (int i = 0; i < n; i++)
    {
        if (adj[i].color == 'r')
        {
            cout << i << ": [";
            cout << adj[i].color << "] :";
            ll *temp = adj[i].adjPtr;
            while (temp != NULL)
            {
                if (adj[temp->v].color == 'r')
                    cout << temp->v << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    cout << "BLue SubGraph" << endl;
    for (int i = 0; i < n; i++)
    {
        if (adj[i].color == 'b')
        {
            cout << i << ": [";
            cout << adj[i].color << "] :";
            ll *temp = adj[i].adjPtr;
            while (temp != NULL)
            {
                if (adj[temp->v].color == 'b')
                    cout << temp->v << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    cout << "Red Cycle" << endl;
    int visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        if (adj[i].color == 'r')
        {
            int nonChromo = 0;
            visited[i] = 1;
            int ans[100];
            int itr = 0;
            ans[itr] = i;
            itr++;
            dfs(i, adj, 'r', visited, -1, ans, itr, parent, 0, nonChromo);
        }
    }

    take = 0;
    cout << "Blue Cycle" << endl;
    visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        if (adj[i].color == 'b')
        {
            int nonChromo = 0;
            int ans[100];
            int itr = 0;
            ans[itr] = i;
            itr++;
            visited[i] = 1;
            dfs(i, adj, 'b', visited, -1, ans, itr, parent, 0, nonChromo);
        }
    }

    cout << "Non Chromo Cycle" << endl;
    visited[n] = {0};
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int parent = i;
        int ans[100];
        int itr = 0;
        ans[itr] = i;
        itr++;
        visited[i] = 1;
        int nonChromo = 0;
        dfs(i, adj, adj[i].color, visited, -1, ans, itr, parent, 1, nonChromo);
    }
    return 0;
}