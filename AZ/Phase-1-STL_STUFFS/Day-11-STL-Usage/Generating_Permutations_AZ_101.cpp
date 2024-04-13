// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int n;
map<int, int> mp;
vector<int> cur_perm;
vector<vector<int>> all;

void rec(int level)
{
    if (level == n)
    {
        all.push_back(cur_perm);
        return;
    }
    for (auto &x : mp)
    {
        if (x.second)
        {
            x.second--;
            cur_perm.push_back(x.first);
            rec(level + 1);
            cur_perm.pop_back();
            x.second++;
        }
    }
}

int main()
{
    RadheKrishna;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        mp[i]++;
    }
    rec(0);
    for (auto x : all)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << '\n';
    }
    return 0;
}