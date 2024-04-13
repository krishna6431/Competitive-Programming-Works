#include <iostream>
using namespace std;

using lli = long long;
// n <= 10^5, arr[i] <= 10^9
lli mod = 1e9 + 7;

lli binpow(lli a, lli b)
{
    if (b == 0)
        return 1;
    if (b % 2)
        return a * binpow(a, b - 1) % mod;
    else
    {
        lli ans = binpow(a, b / 2);
        return ans * ans % mod;
    }
}

lli ncr_precise(lli n, lli r)
{
    if (r < 0 || r > n)
        return 0;
    lli ans = 1;
    for (lli i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

int ncr_array[4004][4004];
void ncr_any_modulo(int m)
{
    ncr_array[0][0] = 1;
    for (int n = 1; n <= 4000; n++)
    {
        for (int r = 0; r <= n; r++)
        {
            if (r == 0 || r == n)
            {
                ncr_array[0][0] = 1;
            }
            else
            {
                ncr_array[n][r] = (ncr_array[n - 1][r] + ncr_array[n - 1][r - 1]) % m;
            }
        }
    }
}

lli fact[400100];
void precompute()
{
    fact[0] = 1;
    for (lli i = 1; i <= 400000; i++)
    {
        fact[i] = i * fact[i - 1] % mod;
    }
}

lli ncr(lli n, lli r)
{
    if (r < 0 || r > n)
        return 0;
    lli den = (fact[r] * fact[n - r]) % mod;
    return fact[n] * binpow(den, mod - 2) % mod;
}

int main()
{
    precompute();
    cout << ncr(6, 4) << endl;
}