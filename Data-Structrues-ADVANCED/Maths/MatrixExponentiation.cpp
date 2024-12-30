#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1000000007;

// Function to multiply two 2x2 matrices under modulo
void multiply(ll f[2][2], ll g[2][2])
{
    ll a = (f[0][0] * g[0][0] + f[0][1] * g[1][0]) % MOD;
    ll b = (f[0][0] * g[0][1] + f[0][1] * g[1][1]) % MOD;
    ll c = (f[1][0] * g[0][0] + f[1][1] * g[1][0]) % MOD;
    ll d = (f[1][0] * g[0][1] + f[1][1] * g[1][1]) % MOD;

    f[0][0] = a;
    f[0][1] = b;
    f[1][0] = c;
    f[1][1] = d;
}

// Function to compute matrix exponentiation for Fibonacci numbers
void power(ll f[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;

    ll g[2][2] = {{1, 1}, {1, 0}}; // Base matrix

    power(f, n / 2);
    multiply(f, f); // Square the matrix

    if (n % 2 == 1) // If n is odd, multiply by the base matrix
        multiply(f, g);
}

// Function to calculate the nth Fibonacci number using matrix exponentiation
ll fib(ll n)
{
    if (n == 0)
        return 0;

    ll f[2][2] = {{1, 1}, {1, 0}}; // Base transformation matrix
    power(f, n - 1);               // Raise the matrix to the power (n-1)

    return f[0][0]; // The top-left element contains F(n)
}

int main()
{
    // Example usage of Fibonacci calculation
    ll n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fib(n) << endl;

    return 0;
}
