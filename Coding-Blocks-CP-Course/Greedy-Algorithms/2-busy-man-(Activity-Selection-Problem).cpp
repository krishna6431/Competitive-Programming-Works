// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t, n, s, e;
    cin >> t;
    vector<pair<int, int>> v;
    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }

        // Activity Selection
        // Sort
        sort(v.begin(), v.end(), compare);

        // start picking activities
        int res = 1;
        int finish = v[0].second;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first >= finish)
            {
                res++;
                finish = v[i].second;
            }
        }
        cout << res << endl;
        v.clear();
    }
    return 0;
}