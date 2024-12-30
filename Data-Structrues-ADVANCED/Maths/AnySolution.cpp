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
        return a;
    }

    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

// Check if any solution exists for ax + by = c
bool any_solution(ll a, ll b, ll c, ll &x, ll &y)
{
    ll g = __gcd(abs(a), abs(b));
    if (c % g != 0)
        return false;

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

// Find both positive solutions for ax + by = c
bool both_positive_solution(ll a, ll b, ll c, ll &x, ll &y)
{
    bool hasSolution = any_solution(a, b, c, x, y);
    if (!hasSolution)
        return false;

    ll g = __gcd(abs(a), abs(b));
    ll xg = x, yg = y;

    // Adjust to ensure both x and y are positive
    if (x < 0)
    {
        ll k = ceil((-x * g * 1.0) / b);
        xg = x + k * b / g;
        yg = y - k * a / g;
    }
    else if (y < 0)
    {
        ll k = ceil((-y * g * 1.0) / a);
        xg = x - k * b / g;
        yg = y + k * a / g;
    }

    if (xg < 0 || yg < 0)
        return false;

    x = xg;
    y = yg;
    return true;
}

int main()
{
    // Example usage of solving linear Diophantine equations

    ll a, b, c; // Coefficients of the equation ax + by = c
    cout << "Enter coefficients a, b and constant c for the equation ax + by = c: ";
    cin >> a >> b >> c;

    ll x, y;

    // Check for any solution
    if (any_solution(a, b, c, x, y))
    {
        cout << "A solution to the equation is: (" << x << ", " << y << ")" << endl;

        // Check for both positive solutions
        if (both_positive_solution(a, b, c, x, y))
        {
            cout << "A positive solution to the equation is: (" << x << ", " << y << ")" << endl;
        }
        else
        {
            cout << "No positive solution exists for the equation." << endl;
        }
    }
    else
    {
        cout << "No solution exists for the equation." << endl;
    }

    return 0;
}
