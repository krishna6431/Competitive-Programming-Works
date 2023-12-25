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
#define que_max priority_queue<ll>
#define que_min priority_queue<ll, vi, greater<ll>>
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
void HarHarMahadev()
{
    ll n;
    cin >> n;
    if (n == 1 or n == 2)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        return;
    }
    if (n == 4)
    {
        cout << 3 << endl;
        return;
    }
    if (n == 5 or n == 6)
    {
        cout << n << endl;
        return;
    }
    double ans = 0;
    ll totalCell = n - 3;
    ans += ((totalCell)*3) / 2.0;
    // bug(ans);
    ans += 2;
    cout << max(0ll, (ll)ans) << endl;
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