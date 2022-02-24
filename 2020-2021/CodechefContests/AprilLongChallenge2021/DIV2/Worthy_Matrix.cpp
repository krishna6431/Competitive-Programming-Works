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
// ll solve(ll v[][m + 1], ll n, ll m, ll k, ll order)
// {

//     }
//     return count;
// }
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
        int n, m;
        ll k;
        cin >> n >> m >> k;
        ll v[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                v[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> v[i][j];
            }
        }
        //prefix sum for rows
        for (int i = 0; i <= n; i++)
        {
            ll sum = v[i][0];
            for (int j = 1; j <= m; j++)
            {
                sum += v[i][j];
                v[i][j] = sum;
            }
        }
        // preix sum for colums
        for (int i = 0; i <= m; i++)
        {
            ll sum = v[0][i];
            for (int j = 1; j <= n; j++)
            {
                sum += v[j][i];
                v[j][i] = sum;
            }
        }
        // for printing Purpose
        // for (int i = 0; i <= n; i++)
        // {

        //     for (int j = 0; j <= m; j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // Solving Problem
        ll count = 0;
        ll mi = min(n, m);
        int order = 1;
        while (order < mi + 1)
        {
            ll i = order;
            ll j = m;
            while (i < n + 1)
            {
                ll x = i - order + 1;
                ll y = j - order + 1;
                ll z = v[i][j] - v[x - 1][j] - v[i][y - 1] + v[x - 1][y - 1];
                if ((z / (order * order)) < k)
                {
                    i++;
                }
                else
                {
                    ll start = order;
                    ll end = m;
                    ll ans;
                    while (start <= end)
                    {
                        ll mid = (start + end) / 2;
                        x = i - order + 1;
                        y = mid - order + 1;
                        z = v[i][mid] - v[x - 1][mid] - v[i][y - 1] + v[x - 1][y - 1];
                        if ((z / (order * order)) < k)
                        {
                            start = mid + 1;
                        }
                        else
                        {
                            ans = mid;
                            end = mid - 1;
                        }
                    }
                    count += m - ans + 1;
                    i++;
                }
            }
            order += 1;
        }
        cout << count << endl;
    }
    return 0;
}