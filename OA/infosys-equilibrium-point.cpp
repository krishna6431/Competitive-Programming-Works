// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll equilibriumPoint(vector<ll> arr)
{
    ll n = arr.size();
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    ll currSum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (currSum == (sum - currSum - arr[i]))
        {
            ans++;
        }
        currSum += arr[i];
    }
    return ans;
}

int main()
{
    vector<ll> arr;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        arr.push_back(t);
    }
    cout << equilibriumPoint(arr) << endl;
    return 0;
}