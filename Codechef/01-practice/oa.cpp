#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pb push_back
#define db double
#define inf 0x3f3f3f3f
using namespace std;
const int N = 2e5 + 5;
const int mod = 998244353;
int n, d[N];
ll res, inv[N], fac[N];
ll fpow(ll x, ll y = mod - 2)
{
    ll z(1);
    for (; y; y >>= 1)
    {
        if (y & 1)
            z = z * x % mod;
        x = x * x % mod;
    }
    return z;
}
void init(int n)
{
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = fac[i - 1] * i % mod;
    inv[n] = fpow(fac[n]);
    for (int i = n; i >= 1; i--)
        inv[i - 1] = inv[i] * i % mod;
}
void add(ll &x, ll y)
{
    x = (x + y) % mod;
}
ll omega[N << 1][2];
void ntt(vector<ll> &a, int f = 0)
{
    int k = 0, len = a.size();
    while ((1 << k) < len)
        k++;
    for (int i = 0; i < len; i++)
    {
        int t = 0;
        for (int j = 0; j < k; j++)
        {
            if (i >> j & 1)
                t += (1 << k - j - 1);
        }
        if (i < t)
            swap(a[i], a[t]);
    }
    for (int l = 2; l <= len; l <<= 1)
    {
        int k = l / 2;
        ll x = omega[l][f];
        for (int i = 0; i != len; i += l)
        {
            ll y = 1;
            for (int j = 0; j < k; j++)
            {
                ll tmp = a[i + j + k] * y % mod;
                a[i + j + k] = (a[i + j] - tmp) % mod;
                a[i + j] = (a[i + j] + tmp) % mod;
                y = y * x % mod;
            }
        }
    }
    if (f)
    {
        ll invlen = fpow(len);
        for (int i = 0; i < len; i++)
            a[i] = a[i] * invlen % mod;
    }
}
struct poly
{
    vector<ll> a;
    friend poly operator*(poly a, poly b)
    {
        assert(a.a.size() == b.a.size());
        ntt(a.a), ntt(b.a);
        for (int i = 0; i < a.a.size(); i++)
            a.a[i] = a.a[i] * b.a[i] % mod;
        ntt(a.a, 1);
        return a;
    }
};
poly solve(int l, int r)
{
    if (l == r)
    {
        poly t;
        t.a.resize(2);
        t.a[0] = 1, t.a[1] = d[l];
        return t;
    }
    int mid = l + r >> 1;
    poly a = solve(l, mid), b = solve(mid + 1, r);
    int len = 1;
    while (len <= r - l + 1)
        len <<= 1;
    a.a.resize(len), b.a.resize(len);
    a = a * b;
    return a;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> d[i];
    init(n);
    int len = 1;
    while (len <= n)
        len <<= 1;
    omega[len][0] = fpow(3, (mod - 1) / len);
    omega[len][1] = fpow(3, mod - 1 - (mod - 1) / len);
    for (int i = len / 2; i; i >>= 1)
    {
        omega[i][0] = omega[i << 1][0] * omega[i << 1][0] % mod;
        omega[i][1] = omega[i << 1][1] * omega[i << 1][1] % mod;
    }
    poly f = solve(1, n);
    ll mul = 1;
    res = fac[n - 1];
    for (int i = 1; i < n; i++)
    {
        add(res, f.a[i] * (n - i) % mod * mul % mod * fac[n - i - 1]);
        mul = mul * n % mod;
    }
    for (int i = 1; i <= n; i++)
        res = res * inv[d[i]] % mod;
    res = res * inv[n] % mod * fac[n - 1] % mod;
    cout << (res + mod) % mod;
}