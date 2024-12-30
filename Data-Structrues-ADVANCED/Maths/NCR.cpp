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
        b >>= 1;         // Divide the exponent by 2
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
    x %= m;
    y %= m;
    return (x + y) % m;
}

// Modular Multiplication: Computes (x * y) % m
ll mul(ll x, ll y, ll m = MOD)
{
    x %= m;
    y %= m;
    return (x * y) % m;
}

// Modular Subtraction: Computes (x - y) % m
ll sub(ll x, ll y, ll m = MOD)
{
    x %= m;
    y %= m;
    return (x - y + m) % m;
}

// Modular Division: Computes (x / y) % m as (x * y^(-1)) % m
ll divide(ll x, ll y, ll m = MOD)
{
    return mul(x, mod_inverse(y, m), m);
}

// Precompute factorials and modular inverses for combinatorics
const ll N = 300500; // Adjust size as needed
ll fact[N], invFact[N];

void precompute()
{
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = mul(fact[i - 1], i);          // Compute factorial modulo MOD
        invFact[i] = mod_inverse(fact[i], MOD); // Compute inverse factorial modulo MOD
    }
}

// Compute nCr % p using precomputed factorials and modular inverses
ll ncr(ll n, ll r, ll p = MOD)
{
    if (r > n)
        return 0;
    return mul(mul(fact[n], invFact[r]), invFact[n - r]);
}

int main()
{
    // Example usage of modular arithmetic functions

    // Modular arithmetic operations
    cout << "Modular Arithmetic Examples:" << endl;
    cout << "Addition: " << add(10, 20) << endl;       // Output: 30
    cout << "Subtraction: " << sub(10, 20) << endl;    // Output: 999999997
    cout << "Multiplication: " << mul(10, 20) << endl; // Output: 200
    cout << "Division: " << divide(10, 20) << endl;    // Output: Modular division result

    // Precompute factorials and modular inverses for combinatorics
    precompute();

    // Compute nCr using precomputed values
    int n = 5, r = 2;
    cout << "nCr(" << n << ", " << r << ") modulo " << MOD << ": " << ncr(n, r) << endl;

    return 0;
}
