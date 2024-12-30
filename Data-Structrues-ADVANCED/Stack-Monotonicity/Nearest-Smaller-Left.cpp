#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

int main()
{
    // Input size of the array
    ll n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input array elements
    ll a[n + 6];
    cout << "Enter the elements of the array:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // Nearest smaller to left
    ll left[n + 6] = {0}; // Array to store indices of nearest smaller element to the left
    stack<ll> s;          // Stack to keep track of indices
    for (ll i = 1; i <= n; i++)
    {
        while (!s.empty() && a[s.top()] >= a[i]) // Pop elements greater than or equal to current element
            s.pop();

        if (s.empty())
        {
            left[i] = 1; // If stack is empty, no smaller element exists to the left
        }
        else
        {
            left[i] = s.top() + 1; // Top of the stack is the nearest smaller element to the left
        }

        s.push(i); // Push current index onto the stack
    }

    // Nearest smaller to right
    ll right[n + 6] = {0}; // Array to store indices of nearest smaller element to the right
    stack<ll> s2;          // Stack to keep track of indices
    for (ll i = n; i >= 1; i--)
    {
        while (!s2.empty() && a[s2.top()] >= a[i]) // Pop elements greater than or equal to current element
            s2.pop();

        if (s2.empty())
        {
            right[i] = n; // If stack is empty, no smaller element exists to the right
        }
        else
        {
            right[i] = s2.top() - 1; // Top of the stack is the nearest smaller element to the right
        }

        s2.push(i); // Push current index onto the stack
    }

    // Output nearest smaller elements to the left for each index
    cout << "Nearest Smaller to Left Indices:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        cout << left[i] << " ";
    }
    cout << nl;

    // Output nearest smaller elements to the right for each index
    cout << "Nearest Smaller to Right Indices:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        cout << right[i] << " ";
    }
    cout << nl;

    return 0;
}
