// All Important Header Files
#include <bits/stdc++.h>
#include <cctype>
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
// CODE WRITTEN BY KRISHNA_6431

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v(n + 1);
        int c = 1;
        if (k * l < n)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            v[i] = c;
            if (c + 1 > k)
                c = 1;

            else
                c++;
        }
        bool f = 0;
        for (int i = 2; i <= n; i++)
        {
            if (v[i] == v[i - 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            for (auto x : v)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}