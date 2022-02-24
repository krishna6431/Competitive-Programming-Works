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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = (ll)log2(n);
        // cout << "Log of " << n << " " << ans << endl;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 2 or n == 3)
        {
            cout << 1 << endl;
            continue;
        }
        // cout << "Log of " << n << " " << ans << endl;
        if (pow(2, ans) <= n)
        {
            ll res = pow(2, ans) - 1;
            cout << (ll)(res);
        }
        else
        {
            ll res = pow(2, ans - 1) - 1;
            cout << (ll)(res);
        }
        cout << endl;
    }
    return 0;
}