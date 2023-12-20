#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Time complexty O(N)
bool isPrime1(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Time complexty O(sqrt(N))
bool isPrime2(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    // little bit modification here
    for (int i = 0; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Seive Approach
void prime_seive(int *prime)
{
    // first mark all odd number's prime
    for (ll i = 3; i <= 100000; i += 2)
    {
        prime[i] = 1;
    }
    for (ll i = 3; i <= sqrt(100000); i += 2)
    {
        // if current number is marked (it is prime)
        if (prime[i] == 1)
        {
            // mark all the multiples of i as not prime

            // instead of j = 2*i we can use facts and starts from j = i*i
            for (ll j = i * i; j <= 100000; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    // special cases;
    prime[2] = 1;
    prime[1] = prime[0] = 0;
}

int main()
{
    int n;
    cin >> n;
    int prime[100001] = {0};
    prime_seive(prime);

    // lets print primes upto range n;
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}