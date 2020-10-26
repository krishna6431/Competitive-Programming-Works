//All Important Header Files
#include <bits/stdc++.h>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//Code Logic

int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll m = v[v.size() - 1];
    ll bits = (int)log2(m) + 1;
    ll ans = 0;
    ll setbit = 0, z_bit = 0;
    ll p_s = pow(2, n);
    for (ll i = 0; i < p_s; i++)
    {
        int s = 0, z = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                setbit = __builtin_popcount(v[j]);
                z_bit = bits - setbit;
                s += setbit;
                z += z_bit;
            }
        }

        if (s == z)
        {
            ans++;
        }
    }

    string fin_ans = bitset<32>(ans - 1).to_string();
    cout << fin_ans.substr(32 - bits, bits);
    return 0;
}