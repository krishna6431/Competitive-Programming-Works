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
    ll n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ll i = 1, j = 2;
    ll temp = x;
    while (i < n && x > 0 && i < j)
    {

        while (v[i] != 0 && x > 0 && i < n)
        {
            // cout << "i index:--> " << i << " j index--> " << j << endl;

            ll r = (int)log2(v[i]);
            ll op = pow(2, r);
            // cout << "p value--> " << r << endl;
            v[i] ^= op;
            j = i + 1;
            if ((v[j] ^ op) > v[j])
            {
                while ((v[j] ^ op) > v[j] && j < n)
                    j++;
            }
            v[j] ^= op;
            x--;
            // cout << "Sequence : ";
            // for (int i = 1; i <= n; i++)
            // {

            //     cout << v[i] << " ";
            // }
            // cout << endl;
        }
        if (v[i] == 0)
        {
            i++;
            j++;
            continue;
        }
    }
    if (x > 0)
    {
        if (x % 2 == 1 && n == 2)
        {
            v[n - 1] = 1;
            v[n] ^= 1;
        }
    }
    {
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
