#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define pb push_back

// Function to find all prime factors of a number (single query)
// Returns a vector of all prime factors (with repetition)
vector<ll> primeFactors(ll n)
{
    vector<ll> pfact;

    // Handle factor 2 separately
    while (n % 2 == 0)
    {
        pfact.push_back(2);
        n /= 2;
    }

    // Check for odd factors from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            pfact.push_back(i);
            n /= i;
        }
    }

    // If n is still greater than 2, it must be a prime number
    if (n > 2)
        pfact.push_back(n);

    return pfact;
}

// Function to find all prime factors with their counts (single query)
// Returns a vector of pairs {prime factor, count}
vector<pll> primeFactorsWithCount(ll n)
{
    vector<pll> pfact; // {prime factor, count}

    // Handle factor 2 separately
    ll count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    if (count > 0)
        pfact.pb({2, count});

    // Check for odd factors from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count > 0)
            pfact.pb({i, count});
    }

    // If n is still greater than 2, it must be a prime number
    if (n > 2)
        pfact.pb({n, 1});

    return pfact;
}

// Sieve of Eratosthenes for multiple queries
const ll MAXN = 1e6 + 5; // Adjust size as needed
vector<ll> spf(MAXN);    // Smallest Prime Factor array

// Precompute smallest prime factors using Sieve of Eratosthenes
void sieve()
{
    for (ll i = 1; i < MAXN; i++)
        spf[i] = i; // Initialize spf[i] to itself

    for (ll i = 2; i * i < MAXN; i++)
    {
        if (spf[i] == i)
        { // If i is prime
            for (ll j = i * i; j < MAXN; j += i)
            {
                if (spf[j] == j) // Mark spf[j] only if it is unmarked
                    spf[j] = i;
            }
        }
    }
}

// Function to find all prime factors of a number using precomputed sieve
// Returns a vector of all prime factors (with repetition)
vector<ll> getFactorization(ll x)
{
    vector<ll> ret;
    while (x != 1)
    {
        ret.pb(spf[x]);
        x /= spf[x];
    }
    return ret;
}

// Function to find all prime factors with their counts using precomputed sieve
// Returns a vector of pairs {prime factor, count}
vector<pll> getFactorizationWithCount(ll x)
{
    vector<pll> ret;
    map<ll, ll> mp;

    while (x != 1)
    {
        mp[spf[x]]++;
        x /= spf[x];
    }

    for (auto p : mp)
    {
        ret.pb({p.first, p.second});
    }

    return ret;
}

int main()
{
    // Example usage

    ll n;
    cout << "Enter a number: ";
    cin >> n;

    // Single query: Prime factors with repetition
    cout << "Prime factors of " << n << ": ";
    vector<ll> pf = primeFactors(n);
    for (ll p : pf)
        cout << p << " ";
    cout << endl;

    // Single query: Prime factors with counts
    cout << "Prime factors with counts: ";
    vector<pll> pfc = primeFactorsWithCount(n);
    for (auto p : pfc)
        cout << "{" << p.first << ", " << p.second << "} ";
    cout << endl;

    // Multiple queries: Using sieve
    sieve(); // Precompute smallest prime factors

    cout << "Prime factors using sieve: ";
    vector<ll> pf_sieve = getFactorization(n);
    for (ll p : pf_sieve)
        cout << p << " ";
    cout << endl;

    cout << "Prime factors with counts using sieve: ";
    vector<pll> pfc_sieve = getFactorizationWithCount(n);
    for (auto p : pfc_sieve)
        cout << "{" << p.first << ", " << p.second << "} ";
    cout << endl;

    return 0;
}
