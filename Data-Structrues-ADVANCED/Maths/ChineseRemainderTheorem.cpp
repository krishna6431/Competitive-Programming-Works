#include <bits/stdc++.h>
using namespace std;

#define ll long long int
typedef vector<ll> vl;

// Function to compute GCD
ll GCD(ll a, ll b)
{
    return (b == 0) ? a : GCD(b, a % b);
}

// Function to compute LCM
inline ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}

// Normalize a number modulo `mod`
inline ll normalize(ll x, ll mod)
{
    x %= mod;
    if (x < 0)
        x += mod;
    return x;
}

// Extended Euclidean Algorithm
struct GCD_type
{
    ll x, y, d; // x and y are coefficients, d is gcd(a, b)
};

GCD_type ex_GCD(ll a, ll b)
{
    if (b == 0)
        return {1, 0, a};
    GCD_type pom = ex_GCD(b, a % b);
    return {pom.y, pom.x - a / b * pom.y, pom.d};
}

// Chinese Remainder Theorem (CRT)
// Solves the system of congruences:
// x ≡ a[i] (mod m[i])
// Returns {x, lcm} where:
// - x is the solution modulo lcm
// - lcm is the least common multiple of all moduli
vl crt(vector<ll> &a, vector<ll> &m)
{
    ll t = a.size();
    if (t == 0)
    {
        return {0ll, 1ll}; // No equations
    }

    // Normalize all remainders to be within [0, m[i])
    for (ll i = 0; i < t; i++)
    {
        a[i] = normalize(a[i], m[i]);
    }

    ll ans = a[0];
    ll lcm = m[0];

    for (int i = 1; i < t; i++)
    {
        auto pom = ex_GCD(lcm, m[i]);
        ll x1 = pom.x;
        ll d = pom.d;

        // Check if the system of congruences has no solution
        if ((a[i] - ans) % d != 0)
            return {0ll, 0ll};

        // Update the solution
        ans = normalize(ans + x1 * (a[i] - ans) / d % (m[i] / d) * lcm, lcm * m[i] / d);
        lcm = LCM(lcm, m[i]); // Update the least common multiple of moduli
    }

    return {ans, lcm};
}

int main()
{
    // Example usage of CRT

    // Input: System of congruences
    // x ≡ 2 (mod 3)
    // x ≡ 3 (mod 5)
    // x ≡ 2 (mod 7)
    vector<ll> remainders = {2, 3, 2}; // Remainders (a[i])
    vector<ll> moduli = {3, 5, 7};     // Moduli (m[i])

    // Solve using CRT
    vl result = crt(remainders, moduli);

    if (result[1] == 0)
    {
        cout << "No solution exists for the given system of congruences." << endl;
    }
    else
    {
        cout << "Solution: x ≡ " << result[0] << " (mod " << result[1] << ")" << endl;
        cout << "This means x = " << result[0] << " + k * " << result[1] << ", where k is any integer." << endl;
    }

    return 0;
}
