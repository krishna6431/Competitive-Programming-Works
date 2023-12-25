#include <bits/stdc++.h>
using namespace std;

int helpMe(string &str, int index, vector<int> position[], vector<int> &ans)
{
    if (str[index] == 'Z')
    {
        return index;
    }

    if (ans[index] != -1)
    {
        return ans[index];
    }

    int elem = str[index] - 'A';
    auto itr1 = position[elem + 1].begin();
    auto itr2 = position[elem + 1].end();
    auto it = upper_bound(itr1, itr2, index);

    if (it == position[elem + 1].end())
    {
        ans[index] = 1e9 + 2;
        return ans[index];
    }

    return ans[index] = helpMe(str, *it, position, ans);
}

int solve(string s)
{
    int size = s.size();
    vector<int> str[26];
    int res = 1e9 + 2;
    for (int i = 0; i < size; i++)
    {
        str[s[i] - 'A'].push_back(i);
    }
    vector<int> ans(size + 1, -1);
    int n = str[0].size();
    for (int i = 0; i < n; i++)
    {
        int newAns = helpMe(s, str[0][i], str, ans) - str[0][i] + 1;
        res = min(res, newAns);
    }

    return res;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;

    int out_;
    out_ = solve(S);
    cout << out_;
}

int longestSubarray(vector<int> &arr)
{
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = max(arr[i], ans);
    }
    int count = 0, ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ans)
        {
            while (i < arr.size() && arr[i] == ans)
            {
                i++;
                count++;
            }
            ans = max(ans, count);
            count = 0;
        }
    }
    return ans;
}