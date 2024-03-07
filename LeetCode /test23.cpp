#include <bits/stdc++.h>
using namespace std;
bool check(map<char, int> &dp1, map<char, int> &dp2)
{
    bool flag = true;
    for (auto c : dp1)
    {
        char ch = c.first;

        if (dp2.find(ch) == dp2.end() || dp2[ch] != dp1[ch])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
vector<string> solve(int t, vector<string> &a, vector<string> &b)
{
    vector<string> ans;

    for (int j = 0; j < (int)a.size(); j++)
    {
        map<char, int> dp1;
        map<char, int> dp2;

        if (a[j].size() != b[j].size())
        {
            ans.push_back("NO");
            continue;
        }
        for (int i = 0; i < a[j].size(); i++)
        {
            dp1[a[j][i]]++;
        }
        for (int i = 0; i < b[j].size(); i++)
        {
            dp2[b[j][i]]++;
        }
        bool flag = check(dp1, dp2);

        flag ? ans.push_back("YES") : ans.push_back("NO");
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    vector<string> a(t), b(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> b[i];
    }
    vector<string> ans = solve(t, a, b);
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}