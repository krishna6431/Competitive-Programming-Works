#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Extended Euclidean Algorithm
ll extended_gcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a; // GCD of (a, 0) is a
    }

    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);

    // Update x and y using results of recursion
    x = y1;
    y = x1 - y1 * (a / b);

    return d; // Return the GCD
}

int main()
{
    // Example usage of Extended Euclidean Algorithm

    ll a, b;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    ll x, y;
    ll gcd = extended_gcd(a, b, x, y);

    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    cout << "Coefficients x and y such that ax + by = gcd(a, b):" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
