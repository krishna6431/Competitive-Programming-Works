#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

int main()
{
    // Input size of the array
    ll n;
    cin >> n;

    // Input array elements
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // Nearest larger or equal element to the left
    ll left[n + 6] = {0}; // Array to store indices of nearest larger/equal element to the left
    stack<ll> s1;         // Stack to keep track of indices
    for (ll i = 1; i <= n; i++)
    {
        while (!s1.empty() && a[s1.top()] < a[i]) // Pop elements smaller than current element
            s1.pop();

        if (s1.empty())
        {
            left[i] = -1; // If stack is empty, no larger/equal element exists to the left
        }
        else
        {
            left[i] = s1.top(); // Top of the stack is the nearest larger/equal element to the left
        }
        s1.push(i); // Push current index onto the stack
    }

    // Nearest larger or equal element to the right
    ll right[n + 6] = {0}; // Array to store indices of nearest larger/equal element to the right
    stack<ll> s2;          // Stack to keep track of indices
    for (ll i = n; i >= 1; i--)
    {
        while (!s2.empty() && a[s2.top()] < a[i]) // Pop elements smaller than current element
            s2.pop();

        if (s2.empty())
        {
            right[i] = -1; // If stack is empty, no larger/equal element exists to the right
        }
        else
        {
            right[i] = s2.top(); // Top of the stack is the nearest larger/equal element to the right
        }
        s2.push(i); // Push current index onto the stack
    }

    // Output nearest larger/equal elements to the left for each index
    for (ll i = 1; i <= n; i++)
    {
        cout << left[i] << " ";
    }
    cout << nl;

    // Output nearest larger/equal elements to the right for each index
    for (ll i = 1; i <= n; i++)
    {
        cout << right[i] << " ";
    }
    cout << nl;

    return 0;
}
