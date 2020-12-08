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
    int n, k;
    cin >> n >> k;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = i;
    }
    if (n == k)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        int cnt = 1;
        int i;
        for (i = 2; i <= n; i++)
        {
            if (cnt == k)
                break;

            if (i % 2 == 0)
            {
                cnt++;
            }
            else
            {
                if ((n - i + 1) > (k - cnt))
                {
                    ans[i] = -1 * ans[i];
                }
            }
        }
        for (int j = i; j <= n; j++)
        {
            ans[j] = -1 * ans[j];
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;

        //Testing validity
        // vector<int> prefix(n + 1);
        // prefix[1] = ans[1];
        // for (int i = 1; i <= n; i++)
        // {
        //     prefix[i] = prefix[i - 1] + ans[i];
        // }
        // cout << "Verdict: ";
        // int counter = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     if (prefix[i] > 0)
        //     {
        //         counter++;
        //     }
        // }
        // counter == k ? cout << "YES" : cout << "NO" << endl;
        // cout << endl;
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
