#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] += (arr[i] - i);
    }
    int ans = -1e9;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        ans = max(ans, itr->second);
    }
    cout << ans << endl;
    return 0;
}