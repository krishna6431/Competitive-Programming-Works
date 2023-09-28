/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
template <typename T>

T fast_expo(T a, T b, T m)
{
    T res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

void HarHarMahadev()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        ll odd = 0;
        ll even = 0;
        for (auto x : v)
        {
            cin >> x;
            if (x & 1)
                odd++;
        }
        even = n - odd;
        ll ans = 0;
        /**
         *
         * odd = 1
         * even = 2 :
         *
         * 1 2 2 3
         * odd = 2
         * even = 1
         *
         */
        if (odd & 1)
        {
            even = even - 1;
            ans += fast_expo(ll(2), even, (ll)(1e9 + 7)) - 1;
            // bug(ans);
            if (odd & 1)
            {
                ll pairs = 1 * even;
                ans += fast_expo(ll(2), pairs, (ll)(1e9 + 7)) - 1;
                odd--;
                // bug(ans);
                // bug(odd);
            }
            ans += fast_expo(ll(2), odd / 2, ll(1e9 + 7)) - 1;
        }
        else
        {
            ans += fast_expo(ll(2), even, (ll)(1e9 + 7)) - 1;
            ans += fast_expo(ll(2), odd / 2, ll(1e9 + 7)) - 1;
        }

        bug(ans);
        bug(odd);

        cout << ans % (ll)(1e9 + 7) << endl;
    }
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}