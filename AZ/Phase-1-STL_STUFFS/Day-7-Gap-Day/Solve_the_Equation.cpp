#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long

ll mod = 1000000007;

ll add(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; }
ll sub(ll a, ll b)
{
    ll ans = ((a % mod) - (b % mod)) % mod;
    ans %= mod;
    ans = (ans + mod) % mod;
    return ans;
}
ll mul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2)
        {
            ans = ((ans % mod) * (a % mod)) % mod;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b /= 2;
    }
    return ans;
}
ll res(char op, ll a, ll b)
{
    if (op == '+')
        return add(a, b);
    else if (op == '-')
        return sub(a, b);
    else if (op == '*')
        return mul(a, b);
    else
        return mul(a, power(b, mod - 2));
}

signed main()
{
    IOS ll t;
    cin >> t;
    ll a, b, c;
    string s;
    getline(cin, s);
    while (t--)
    {
        ll a, b, c;
        char op1, op2;
        char open, close;
        string m;
        ll p;
        cin >> open >> a >> op1 >> b >> op2 >> c >> close >> m >> p;
        mod = p;
        ll ans = 0;
        if ((op1 == '+') || (op1 == '-'))
        {
            if ((op2 == '+') || (op2 == '-'))
            {
                ans = res(op1, a, b);
                ans = res(op2, ans, c);
            }
            else
            {
                ans = res(op2, b, c);
                ans = res(op1, a, ans);
            }
        }
        else
        {
            ans = res(op1, a, b);
            ans = res(op2, ans, c);
        }
        cout << ans << "\n";
    }
    return 0;
}
