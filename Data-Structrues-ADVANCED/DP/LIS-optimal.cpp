#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Function to find the length of the Longest Increasing Subsequence (LIS) in O(n log n)
ll lis(vector<ll> &a)
{
    ll n = a.size();
    ll INF = 1e9;
    vector<ll> d(n + 1, INF); // Array to store the smallest ending value of LIS of length i
    d[0] = -INF;              // Base case: LIS of length 0 has no elements

    for (ll i = 0; i < n; i++)
    {
        // Find the position where a[i] can replace an element in d
        ll j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j - 1] < a[i] && a[i] < d[j])
            d[j] = a[i]; // Update the LIS ending at length j
    }

    // Find the maximum length of LIS
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
    {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}

int main()
{
    ll n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<ll> a(n);
    cout << "Enter the elements of the array:" << endl;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll result = lis(a); // Call LIS function
    cout << "Length of Longest Increasing Subsequence: " << result << endl;

    return 0;
}
