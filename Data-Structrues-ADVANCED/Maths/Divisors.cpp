#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define pb push_back

// Function to find all divisors of a number `n`
vector<ll> divisors(ll n)
{
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i) // If both divisors are the same (perfect square)
                ans.push_back(i);
            else
            { // Otherwise, add both divisors
                ans.push_back(i);
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}

// Recursive function to generate all divisors from prime factors
vector<ll> all_divisors;
void generateDivisors_recursive(ll curIndex, ll curDivisor, vector<pll> &arr)
{
    if (curIndex == arr.size())
    {
        all_divisors.pb(curDivisor); // Store the divisor
        return;
    }

    for (ll i = 0; i <= arr[curIndex].second; i++)
    { // Iterate over powers of the current prime factor
        generateDivisors_recursive(curIndex + 1, curDivisor, arr);
        curDivisor *= arr[curIndex].first; // Multiply by the current prime factor
    }
}

// Wrapper function to generate all divisors from prime factors
void generateDivisors(vector<pll> &arr)
{
    all_divisors.clear();
    generateDivisors_recursive(0, 1, arr);
}

int main()
{
    // Example 1: Find divisors of a number using the `divisors` function
    ll n = 10;
    cout << "Divisors of " << n << ": ";
    vector<ll> divs = divisors(n);
    for (ll d : divs)
    {
        cout << d << " ";
    }
    cout << endl;

    // Example 2: Generate divisors using prime factorization
    // Prime factors of 12: {2^2, 3^1} => [(2, 2), (3, 1)]
    vector<pll> prime_factors = {{2, 2}, {3, 1}};

    generateDivisors(prime_factors);

    cout << "Divisors generated from prime factors: ";
    for (ll d : all_divisors)
    {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
