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

bool sqrt_cbrt[2001] = {false};
void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    for (int i = 1; i <= 1000; i++)
    {
        if (sqrt_cbrt[2 * i])
        {
            ans += (m[i] * (m[i] - 1) / 2);
        }
        for (int j = i + 1; j <= 1000; j++)
        {
            if (sqrt_cbrt[i + j])
            {
                ans += (m[i] * m[j]);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    for (int i = 1; i * i <= 2000; i++)
    {
        sqrt_cbrt[i * i] = true;
    }
    for (int i = 1; i * i * i <= 2000; i++)
    {
        sqrt_cbrt[i * i * i] = true;
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
