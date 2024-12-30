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

// Check if any solution exists for ax + by = c
bool any_solution(ll a, ll b, ll c, ll &x, ll &y)
{
    ll g = __gcd(abs(a), abs(b));
    if (c % g != 0)
        return false; // No solution exists if c is not divisible by gcd(a, b)

    // Solve a * x0 + b * y0 = g
    ll x0 = 0, y0 = 0;
    extended_gcd(abs(a), abs(b), x0, y0);

    // Scale the solution to satisfy ax + by = c
    x = x0 * c / g;
    y = y0 * c / g;

    // Adjust signs based on the original coefficients
    if (a < 0)
        x = -x;
    if (b < 0)
        y = -y;

    return true;
}

// General solution formulas:
// xg = x + k * (b / g)
// yg = y - k * (a / g)

int main()
{
    // Example usage of solving linear Diophantine equations

    ll a, b, c;
    cout << "Enter coefficients a, b and constant c for the equation ax + by = c: ";
    cin >> a >> b >> c;

    ll x, y;

    // Check for any solution
    if (any_solution(a, b, c, x, y))
    {
        cout << "A solution to the equation is: (" << x << ", " << y << ")" << endl;

        // General solution representation
        ll g = __gcd(abs(a), abs(b));
        cout << "General solution:" << endl;
        cout << "x = " << x << " + k * " << b / g << endl;
        cout << "y = " << y << " - k * " << a / g << endl;
        cout << "(where k is any integer)" << endl;
    }
    else
    {
        cout << "No solution exists for the given equation." << endl;
    }

    return 0;
}
