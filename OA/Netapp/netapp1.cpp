#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
using namespace std;
using ll = long long;

const int MAX = 1000000;
ll fact[MAX + 1], invFact[MAX + 1];

ll power(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void precompute()
{
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= MAX; ++i)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[MAX] = power(fact[MAX], MOD - 2, MOD);
    for (int i = MAX - 1; i > 0; --i)
    {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

ll nCr(int n, int r)
{
    if (n < r)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

int main()
{
    precompute();

    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        ll result = 0;
        for (int n = X; n <= Y; ++n)
        {
            result = (result + nCr(n - 1, 2)) % MOD;
        }

        cout << result << endl;
    }
    return 0;
}