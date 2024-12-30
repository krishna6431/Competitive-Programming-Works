#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Kadane's Algorithm to find the maximum subarray sum
ll maxSubArraySum(vector<ll> &a)
{
    ll max_so_far = LLONG_MIN; // Initialize to the smallest possible value
    ll max_ending_here = 0;    // Tracks the sum of the current subarray

    for (ll i = 0; i < a.size(); i++)
    {
        max_ending_here += a[i];

        // Update the maximum sum so far
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        // Reset current sum if it becomes negative
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
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

    ll result = maxSubArraySum(a); // Call Kadane's Algorithm
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
