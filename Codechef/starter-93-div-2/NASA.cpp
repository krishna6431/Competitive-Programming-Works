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
vector<int> palindrome;
bool check(ll n)
{
    ll reverse = 0;
    ll temp = n;
    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == n);
}
void gen()
{
    for (int i = 1; i < (1 << 18); i++)
    {
        if (check(i))
        {
            palindrome.pb(i);
        }
    }
}
void HarHarMahadev()
{
    ll t;
    cin >> t;
    gen();
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        vll freq((ll)1e6 + 5, 0);
        for (auto &x : v)
        {
            cin >> x;
            freq[x]++;
        }
        ll ans = 0;
        ll same = 0;
        for (int i = 0; i < freq.size(); i++)
        {
            int count = freq[i];
            same += (count) * (count + 1) / 2;
        }

        for (int i = 0; i < palindrome.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll xorr = palindrome[i] ^ v[j];
                ans += freq[xorr];
            }
        }
        ans = ans / 2;
        cout << ans + same << endl;
    }
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}