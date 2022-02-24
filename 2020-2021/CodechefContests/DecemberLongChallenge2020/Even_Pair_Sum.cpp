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
// CODE WRITTEN BY KRISHNA

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll odd_a = 0, odd_b = 0, even_a = 0, even_b = 0;
    if (a == 1 || b == 1)
    {
        max(a, b) % 2 == 0 ? cout << max(a, b) / 2 << endl : cout << max(a, b) / 2 + 1 << endl;
    }
    else
    {

        if (a & 1)
        {
            odd_a = a / 2 + 1;
            even_a = a / 2;
        }
        else
        {
            odd_a = a / 2;
            even_a = a / 2;
        }
        if (b & 1)
        {
            odd_b = b / 2 + 1;
            even_b = b / 2;
        }
        else
        {
            odd_b = b / 2;
            even_b = b / 2;
        }
        cout << odd_a * odd_b + even_a * even_b << endl;
    }
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
