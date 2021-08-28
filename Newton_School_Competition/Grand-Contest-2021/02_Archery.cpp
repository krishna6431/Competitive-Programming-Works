#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> umap;
        for (int i = 0; i < arr.size(); i++)
        {
            umap[arr[i]]++;
        }

        // for (auto x : umap)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }

        int ans = 0;
        for (auto x : umap)
        {
            if (x.second >= k)
            {
                ans++;
            }
        }
        // cout << "Temp Ans : " << ans << endl;
        int sum = 0;
        for (auto x : umap)
        {
            if (x.second < k)
            {
                sum += x.second;
            }
        }
        // cout <<"less than k Sum " << sum << endl;
        int c_v = sum % k ? (sum / k) + 1 : sum / k;
        int final_ans = ans + c_v;
        cout << final_ans << endl;
    }
    return 0;
}