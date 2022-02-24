//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
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

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll x, y;
        cin >> x >> y;
        v[x - 1] = y;
        ll count = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] != v[i])
                count++;
        }
        cout << count << endl;
        q--;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            if (x != 1 || x != n - 1)
            {
                if (v[x - 1] != v[x - 2])
                    count--;
                if (v[x - 1] != v[x])
                    count--;
            }
            v[x - 1] = y;
            if (x != 1 || x != n - 1)
            {
                if (v[x - 1] != v[x - 2])
                    count++;
                if (v[x - 1] != v[x])
                    count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}
