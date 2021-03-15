// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i < end; i++)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// CODE WRITTEN BY KRISHNA_6431

void solve()
{

    vector<int> bin;
    ll c;
    cin >> c;
    while (c)
    {
        bin.pb(c % 2);
        c /= 2;
    }
    // for (auto x : bin)
    // {
    //     cout << x << endl;
    // }
    int sz = bin.size();
    vector<int> a(sz);
    vector<int> b(sz);
    reverse(bin.begin(), bin.end());
    a[0] = 1;
    for (int i = 1; i < sz; i++)
    {
        if (bin[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < sz; i++)
    {
        b[i] = bin[i] ^ a[i];
    }
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << bin[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    ll mul = sz - 1;
    for (int i = 0; i < sz; i++)
    {
        a[i] *= pow(2, mul);
        b[i] *= pow(2, mul);
        mul--;
    }
    ll ans1 = accumulate(a.begin(), a.end(), 0);
    ll ans2 = accumulate(b.begin(), b.end(), 0);
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << b[i] << " ";
    // }
    cout << ans1 * ans2 << endl;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
