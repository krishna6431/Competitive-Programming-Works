#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Enhanced Kadane's Algorithm to find the maximum subarray sum
// Also computes prefix (`fw`) and suffix (`bw`) maximum subarray sums
ll kadanes2(vector<ll> &a)
{
    ll n = a.size();
    vector<ll> fw(n, 0), bw(n, 0); // Forward and backward arrays

    // Forward pass: Compute maximum subarray sum ending at each index
    ll cur_max = a[0];
    ll max_so_far = a[0];
    fw[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        cur_max = max(a[i], cur_max + a[i]);   // Update current maximum
        max_so_far = max(max_so_far, cur_max); // Update global maximum
        fw[i] = cur_max;
    }

    // Convert `fw` to prefix maximum array
    for (ll i = 1; i < n; i++)
    {
        fw[i] = max(fw[i], fw[i - 1]);
    }

    // Backward pass: Compute maximum subarray sum starting at each index
    cur_max = a[n - 1];
    max_so_far = a[n - 1];
    bw[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        cur_max = max(a[i], cur_max + a[i]);   // Update current maximum
        max_so_far = max(max_so_far, cur_max); // Update global maximum
        bw[i] = cur_max;
    }

    // Convert `bw` to suffix maximum array
    for (ll i = n - 2; i >= 0; i--)
    {
        bw[i] = max(bw[i], bw[i + 1]);
    }

    return fw[n - 1]; // Maximum subarray sum of the entire array (can be negative)
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

    ll result = kadanes2(a); // Call the enhanced Kadane's Algorithm
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
