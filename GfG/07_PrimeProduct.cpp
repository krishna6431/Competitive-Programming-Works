#include <iostream>
using namespace std;

long long is_prime[1000000001];
void seive()
{
    long long max = 1000000000;
    for (long long i = 2; i <= max; i++)
    {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (long long i = 2; i * i <= max; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= max; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    long long mod = 1000000007;
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long prod = 1;
        for (int i = l; i <= r; i++)
        {
            if (is_prime[i])
            {
                prod = (prod * i) % mod;
            }
        }
        cout << prod << endl;
    }
    return 0;
}