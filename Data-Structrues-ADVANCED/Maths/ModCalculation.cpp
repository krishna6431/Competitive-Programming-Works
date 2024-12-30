#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e9 + 7;

// Fast Modular Exponentiation: Computes (a^b) % m
ll fast_mod_exp(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1) // If b is odd, multiply the result by a
            res = (res * a) % m;

        a = (a * a) % m; // Square the base
        b = b >> 1;      // Divide the exponent by 2
    }
    return res;
}

// Modular Inverse: Computes a^(-1) % m using Fermat's Little Theorem (m must be prime)
ll mod_inverse(ll a, ll m = MOD)
{
    return fast_mod_exp(a, m - 2, m);
}

// Modular Addition: Computes (x + y) % m
ll add(ll x, ll y, ll m = MOD)
{
    x = x % m;
    y = y % m;
    ll res = x + y;
    return (res >= m ? res - m : res);
}

// Modular Multiplication: Computes (x * y) % m
ll mul(ll x, ll y, ll m = MOD)
{
    x = x % m;
    y = y % m;
    ll res = x * y;
    return (res >= m ? res % m : res);
}

// Modular Subtraction: Computes (x - y) % m
ll sub(ll x, ll y, ll m = MOD)
{
    x = x % m;
    y = y % m;
    ll res = x - y;
    return (res < 0 ? res + m : res);
}

// Modular Division: Computes (x / y) % m as (x * y^(-1)) % m
ll divide(ll x, ll y, ll m = MOD)
{
    return mul(x, mod_inverse(y, m), m);
}

int main()
{
    // Example usage of modular arithmetic functions

    ll a, b;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    cout << "Modular Addition (a + b): " << add(a, b) << endl;
    cout << "Modular Subtraction (a - b): " << sub(a, b) << endl;
    cout << "Modular Multiplication (a * b): " << mul(a, b) << endl;

    if (b != 0)
    {
        cout << "Modular Division (a / b): " << divide(a, b) << endl;
        cout << "Modular Inverse of b: " << mod_inverse(b) << endl;
    }
    else
    {
        cout << "Division and modular inverse are not defined for b = 0." << endl;
    }

    ll exp;
    cout << "Enter an exponent for modular exponentiation: ";
    cin >> exp;

    cout << "Modular Exponentiation (a^exp): " << fast_mod_exp(a, exp) << endl;

    return 0;
}
