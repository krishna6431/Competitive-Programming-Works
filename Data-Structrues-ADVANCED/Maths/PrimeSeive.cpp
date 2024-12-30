#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MAX = 1e6 + 5;

// Arrays for Sieve
bool prime[MAX]; // `true` if the number is prime, `false` otherwise
ll spf[MAX];     // Smallest Prime Factor (SPF) of a number

// Sieve of Eratosthenes to find primes and smallest prime factors
void sieve()
{
    // Initialize all numbers as prime and set smallest prime factor to itself
    fill(prime, prime + MAX, true);
    for (ll i = 1; i < MAX; i++)
        spf[i] = i;

    // Mark 0 and 1 as non-prime
    prime[0] = prime[1] = false;

    // Start marking multiples of each prime number
    for (ll i = 2; i * i < MAX; i++)
    {
        if (prime[i])
        { // If `i` is a prime number
            for (ll j = i * i; j < MAX; j += i)
            {
                if (prime[j])
                { // Mark `j` as non-prime and update its SPF
                    spf[j] = i;
                }
                prime[j] = false;
            }
        }
    }
}

///////////////// SIEVE-2 ////////////////////////////
// This version calculates the distinct number of prime factors for multiple queries

const ll MAX2 = 2e7 + 5;
bool prime2[MAX2]; // `true` if the number is prime, `false` otherwise
ll spf2[MAX2];     // Smallest Prime Factor (SPF) of a number
ll cnt[MAX2];      // Count of distinct prime factors of a number

// Modified Sieve to calculate distinct number of prime factors
void sieve2()
{
    // Initialize all numbers as prime and set smallest prime factor to itself
    fill(prime2, prime2 + MAX2, true);
    for (ll i = 1; i < MAX2; i++)
        spf2[i] = i;

    // Mark 0 and 1 as non-prime
    prime2[0] = prime2[1] = false;

    // Start marking multiples of each prime number
    for (ll i = 2; i < MAX2; i++)
    { // Note: No `i * i` condition here, iterate fully
        if (prime2[i])
        {               // If `i` is a prime number
            cnt[i] = 1; // A prime has exactly one distinct factor (itself)
            for (ll j = 2 * i; j < MAX2; j += i)
            {
                if (prime2[j])
                { // Mark `j` as non-prime and update its SPF
                    spf2[j] = i;
                }
                prime2[j] = false;
                cnt[j]++; // Increment count of distinct factors for `j`
            }
        }
    }
}

int main()
{
    // Example usage of Sieve-1:
    sieve();
    cout << "Sieve-1 Example:" << endl;
    cout << "Is 29 a prime? " << (prime[29] ? "Yes" : "No") << endl;
    cout << "Smallest Prime Factor of 30: " << spf[30] << endl;

    // Example usage of Sieve-2:
    sieve2();
    cout << "\nSieve-2 Example:" << endl;
    cout << "Number of distinct prime factors of 30: " << cnt[30] << endl;
    cout << "Number of distinct prime factors of 60: " << cnt[60] << endl;

    return 0;
}
