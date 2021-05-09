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
        int n;
        cin >> n;
        int x = INT_MAX, pos = -1;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (a < x)
                x = a, pos = i;
        }
        cout << n - 1 << endl;
        // cout << "Array Before: " << endl;
        for (int i = 0; i < n; ++i)
        {
            if (i == pos)
                continue;
            cout << pos + 1 << ' ' << i + 1 << ' ' << x << ' ' << x + abs(i - pos) << "\n";
        }
    }
    return 0;
}