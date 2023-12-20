#include <bits/stdc++.h>
using namespace std;

const int n = 10000000;
bitset<10000000> prime;
vector<int> primes;

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
int main()
{
    seive();
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << primes[i] << " ";
    }
    cout << endl;
    return 0;
}