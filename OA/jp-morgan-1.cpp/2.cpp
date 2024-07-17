#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(int n, int m, vector<int> &p, vector<int> &q)
{
    sort(p.begin(), p.end());
    vector<long long> pre(p.size() + 1);
    for (int i = 0; i < p.size(); ++i)
    {
        pre[i + 1] = pre[i] + p[i];
    }
    vector<long long> res;
    for (int x : q)
    {
        int idx = lower_bound(p.begin(), p.end(), x) - p.begin();
        long long total = pre[p.size()] - 2 * pre[idx] + (long long)x * (2 * idx - p.size());
        res.push_back(total);
    }
    return res;
}

int main()
{
    vector<int> p = {1, 2, 3};
    vector<int> q = {3, 2, 1, 5};
    vector<long long> ans = solve(3, 4, p, q);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}