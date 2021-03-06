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
        int n, b, m;
        cin >> n >> b >> m;

        vector<int> arr;
        int mv;
        for (int i = 0; i < m; i++)
        {
            cin >> mv;
            arr.pb(mv);
        }
        if (n < b)
        {
            cout << 1 << endl;
            continue;
        }
        int bn = arr[0] / b;
        int ch = 1;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] / b == bn)
            {
                continue;
            }
            else
            {
                bn = arr[i] / b;
                ch++;
            }
        }
        cout << ch << endl;
    }
    return 0;
}