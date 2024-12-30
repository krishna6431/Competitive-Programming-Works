#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Function to calculate LCM of n numbers in a vector
ll lcm(vector<ll> &v)
{
    if (v.size() == 0)
        return 0; // If the vector is empty, return 0

    ll ans = v[0];
    for (ll i = 1; i < v.size(); i++)
    {
        ans = (ans * v[i]) / __gcd(ans, v[i]); // Update LCM using the formula
    }

    return ans;
}

int main()
{
    // Example usage of LCM function

    ll n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<ll> v(n);
    cout << "Enter the elements:" << endl;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll result = lcm(v);

    cout << "The LCM of the given numbers is: " << result << endl;

    return 0;
}
