#include <bits/stdc++.h>
using namespace std;

const int n = 10000000;
bitset<10000000> prime;
vector<int> primes;

// for cheking number 10^12 is prime or not (using seive we can only make array og 10^7 using bitset)
void seive()
{

    // set all bits
    prime.set(); // 1 1 1 1 1 1 1 1 1 1 1 1...
    prime[0] = prime[1] = 0;

    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (prime[i])
        {
            primes.push_back(i);
            for (long long j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

bool isPrime(long long int No)
{
    if (No <= n)
    {
        return prime[No] == 1 ? true : false;
    }
    for (long long int i = 0; (long long int)(primes[i] * primes[i]) <= No && i < primes.size(); i++)
    {
        if (No % primes[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    seive();
    long long int No;
    cin >> No;
    cout << isPrime(No) << endl;
    cout << endl;
    return 0;
}