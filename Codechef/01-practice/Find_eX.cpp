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
#define oned(arr, size)       \
    vector<int> arr(size, 0); \
    for (auto &x : arr)       \
        cin >> x;
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
ll exGCD(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1, gcd = exGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

ll lcm(ll a, ll b)
{
    ll gcd = __gcd(a, b);
    ll LCM = a * b / gcd;
    return LCM;
}
void HarHarMahadev()
{
    // ll a, b, c, d;
    // cin >> a >> b >> c >> d;
    // ll LCM = lcm(b, d);
    // ll rem = a % b;
    // if ((b - rem) == (d - rem))
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    // if ((b - rem) >= 2 and (d - rem) >= 2)
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    // if (((b - rem) == 1 and (d - rem) >= 2) or ((b - rem) >= 2 and (d - rem) == 1))
    // {
    //     cout << LCM - rem << endl;
    // }
    int n;
    cin >> n;
    vll v(n);
}

int main()
{
    RadheKrishna;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int testcase = 1;
    cin >> testcase;
    int testcaseCount = 1;
    while (testcase--)
    {
        // cout << "Case #" << testcaseCount << ": ";
        testcaseCount++;
        HarHarMahadev();
    }
    return 0;
}