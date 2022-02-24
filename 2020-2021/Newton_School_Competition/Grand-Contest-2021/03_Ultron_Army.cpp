#include <bits/stdc++.h>
using namespace std;
//code is written by krishna_6431
int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    vector<int> v;
    while (q--)
    {
        int ans = 0;
        int left, right;
        cin >> left >> right;
        unordered_set<int> se;
        unordered_map<int, int> umap;

        for (int i = left; i <= right; i++)
        {
            umap[arr[i]]++;
        }
        for (int i = left; i <= right; i++)
        {
            int x1 = x - arr[i];
            if (se.find(x1) != se.end())
            {
                ans = ans + umap[x1];
            }
            else
            {
                se.insert(arr[i]);
            }

            // for (auto x : se)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
        }
        v.push_back(ans);
    }
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    int ans1 = v[0] ^ v[1];
    for (int i = 2; i < v.size(); i++)
    {
        ans1 ^= v[i];
    }
    cout << ans1 << endl;
    return 0;
}