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
ll solve(ll n)
{
    if (n == 1)
    {
        return 20;
    }
    else if (n == 2)
    {
        return 36;
    }
    else if (n == 3)
    {
        return 51;
    }
    else if (n == 4)
    {
        return 60;
    }
    else
    {
        ll temp_res = (n / 4) * 44;
        if (n % 4 == 0)
        {
            temp_res += 16;
        }
        else if (n % 4 == 1)
        {
            temp_res += 32;
        }
        else if (n % 4 == 2)
        {
            temp_res += 44;
        }
        else if (n % 4 == 3)
        {
            temp_res += 55;
        }
        return temp_res;
    }
}
int main()
{
    fast;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}
