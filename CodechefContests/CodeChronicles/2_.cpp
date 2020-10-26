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
#define display(start, end) for (int i = start; i < end; i++)
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
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fast;
    int t;

    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v.pb(temp);
        }
        sort(v.begin(), v.end());
        ll res = -1;
        for (ll i = 1; i < v.size(); i++)
        {
            if ((v[i] - v[i - 1]) > 1)
            {
                if ((v[i] + 1) == m)
                {
                    res = m;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}