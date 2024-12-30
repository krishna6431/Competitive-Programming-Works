#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Function to compute Euler's Totient Function (phi)
// phi(n) = Count of integers in the range [1, n] that are coprime with n
ll phi(ll n)
{
    ll res = n; // Initialize result as n

    // Iterate over all possible prime factors of n
    for (ll i = 2; i * i <= n; i++)
    {
        // Check if i is a prime factor of n
        if (n % i == 0)
        {
            // Remove all occurrences of this prime factor from n
            while (n % i == 0)
            {
                n /= i;
            }
            // Update the result using the formula:
            // phi(n) = phi(n) * (1 - 1/p) => res = res / p * (p - 1)
            res = (res / i) * (i - 1);
        }
    }

    // If n is still greater than 1, it means it is a prime factor
    if (n > 1)
    {
        res = (res / n) * (n - 1);
    }

    return res;
}

int main()
{
    // Example usage of Euler's Totient Function

    ll n;
    cout << "Enter a number to compute its Euler's Totient Function: ";
    cin >> n;

    cout << "phi(" << n << ") = " << phi(n) << endl;

    return 0;
}
