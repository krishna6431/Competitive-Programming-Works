#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int sz = 2e5 + 5, mod = 1e9 + 7;
int par[sz], saz[sz];
int find_par(int node)
{
    if (par[node] == node)
        return node;
    return par[node] = find_par(par[node]);
}
vector<int> getGroups(int n, int q, string query[], int student1[], int student2[])
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
        saz[i] = 1;
    }
    std::vector<int> ans;
    for (int i = 0; i < q; i++)
    {
        int a = find_par(student1[i]);
        int b = find_par(student2[i]);
        if (query[i] == "Friend")
        {
            if (a != b)
            {
                par[a] = b;
                saz[b] += saz[a];
            }
        }
        else
        {
            int ct = saz[a];
            if (a != b)
                ct += saz[b];
            ans.push_back(ct);
        }
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1[] = {"Friend", "Total", "Total"};
    int a1[] = {1, 2};
    int a2[] = {2, 3};
    std::vector<int> v = getGroups(3, 2, s1, a1, a2);
    for (int &u : v)
        cout << u << " ";
    return 0;
}