// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

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
    for (auto &[x, y] : mp)
    {
        if (y)
        {
            y--;
            cur_perm.push_back(x);
            rec(level + 1);
            cur_perm.pop_back();
            y++;
        }
    }
}

int main()
{
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
    }
    rec(0);
    for (auto x : all)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}