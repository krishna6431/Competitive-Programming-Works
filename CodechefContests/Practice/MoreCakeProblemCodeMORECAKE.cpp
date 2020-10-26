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

// Code is written by Krishna
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    int t;
    cin >> t;
    vector<ll> v,v1;
    while (t--)
    {
        ll cake;
        cin >> cake;
        ll member, youngest, multiplier;
        cin >> member >> youngest >> multiplier;
        ll total = 0;
        for (int i = 1; i < member; i++)
            while (member--)
            {
                total += youngest;
                youngest *= multiplier;
            }
        
        if (total <= cake)
        {
            cout << "POSSIBLE "<< cake - total << endl;
            v.pb(cake - total);
        }

        else
        {
            cout << "IMPOSSIBLE " << total - cake << endl;
            v1.pb(total - cake);
        }
    }
    ll x = accumulate(v.begin(), v.end(), 0);
    ll y = accumulate(v1.begin(), v1.end(), 0);
    // cout << x << y << endl;
    if (x >= y)
    {
        cout << "POSSIBLE" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}