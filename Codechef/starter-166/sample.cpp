#include <bits/stdc++.h>
using namespace std;
// code is written by mr_krishna

int getMostVisited(int n, vector<pair<int, int>> &sprints)
{
    vector<int> arr(n + 2, 0);
    for (int i = 0; i < sprints.size(); ++i)
    {
        int start = min(sprints[i].first, sprints[i].second);
        int end = max(sprints[i].first, sprints[i].second);

        arr[start] += 1;
        arr[end + 1] -= 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        arr[i] += arr[i - 1];
    }

    int maxVisits = *max_element(arr.begin() + 1, arr.end());

    int ans = 1e9;
    for (int i = 1; i <= n; ++i)
    {
        if (arr[i] == maxVisits)
        {
            ans = min(ans, i);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> v(m);
    for (auto &x : v)
    {
        cin >> x;
    }
    vector<pair<int, int>> sprints;
    for (int i = 0; i < m - 1; i++)
    {
        sprints.push_back({v[i], v[i + 1]});
    }
    cout << getMostVisited(n, sprints) << endl;
    return 0;
}