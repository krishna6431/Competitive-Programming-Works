#include <bits/stdc++.h>
using namespace std;

bool check(int mid, vector<int> &v, int k)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= mid)
        {
            if (v[i] + k >= mid)
            {
                ans++;
            }
        }
        else
        {
            if (v[i] - k <= mid)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int low = v[0];
        int high = v[n - 1];
        int ans = INT_MIN;
        while (low <= high)
        {
            cout << low << " " << high << endl;
            int mid = low + (high - low) / 2;
            cout << "mid " << mid << endl;
            if (check(mid, v, k))
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << "ans: " << ans << endl;
        int finalAns = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= ans)
            {
                if (v[i] + k >= ans)
                {
                    finalAns++;
                }
            }
            else
            {
                if (v[i] - k <= ans)
                {
                    finalAns++;
                }
            }
        }
        cout << finalAns << endl;
    }
}