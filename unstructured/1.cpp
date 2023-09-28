#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
#define ll long long
// Function to calculate the minimum number of operations and count sequences
ll fact[200005];
void f()
{
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

ll multiply(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

int main()
{
    long long t;
    cin >> t;
    f();
    while (t--)
    {
        string str;
        cin >> str;
        ll ways = 1;
        ll count = 0;
        ll guccha = 0;
        for (ll i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
            {
                count++;
                count %= MOD;
                if (guccha > 0)
                {
                    guccha++;
                    guccha %= MOD;
                }
                else
                    guccha = 2;
            }
            else
            {
                // cout << guccha << " ";
                if (guccha == 0)
                    continue;
                ways = (ways * guccha) % MOD;
                guccha = 0;
            }
        }
        if (guccha)
        {
            ways = (ways * guccha) % MOD;
        }
        // cout << endl;
        cout << count << " ";
        ll res = multiply(ways, fact[count], MOD);
        cout << res << endl;
    }

    return 0;
}