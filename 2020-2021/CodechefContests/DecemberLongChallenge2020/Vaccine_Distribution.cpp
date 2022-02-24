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
    int n, daily_limit;
    cin >> n >> daily_limit;
    vector<int> ages(n);
    int cnt_risk = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ages[i];
        if (ages[i] >= 80 || ages[i] <= 9)
        {
            cnt_risk++;
        }
    }
    int ans = 0;
    int rem = n - cnt_risk;
    if (cnt_risk % daily_limit != 0)
    {
        ans = (cnt_risk / daily_limit) + 1;
    }
    else
    {
        ans = cnt_risk / daily_limit;
    }
    if (rem % daily_limit == 0)
    {
        cout << ans + rem / daily_limit << endl;
    }
    else
    {
        cout << ans + (rem / daily_limit) + 1 << endl;
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
