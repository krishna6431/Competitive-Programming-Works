#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(const vector<ll> &arr, ll K)
{
    unordered_map<ll, ll> freqMap;
    long long count = 0;

    for (ll num : arr)
    {
        ll remainder = num % K;
        if (remainder < 0)
        {
            remainder += K;
        }

        ll complement = (K - remainder) % K;

        if (freqMap.find(complement) != freqMap.end())
        {
            count += freqMap[complement];
        }

        freqMap[remainder]++;
    }

    return count;
}

signed main()
{
    vector<ll> arr = {2, 2, 1, 7, 5, 3};
    ll K = 4;
    cout << solve(arr, K) << endl;
    return 0;
}