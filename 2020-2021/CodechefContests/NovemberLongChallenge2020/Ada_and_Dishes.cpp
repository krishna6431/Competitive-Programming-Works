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
// CODE WRITTEN BY KRISHNA_6431

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int ans = v[n - 1];
    int temp = ans;
    for (int i = n - 2, j = n - 1; i >= 0; i--)
    {
        temp -= v[i];
        if (temp <= 0)
        {
            temp = abs(temp);
            ans = ans + temp;
        }
    }
    cout << ans << endl;
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
// CODE WRITTEN BY KRISHNA_6431

void solve()
{
    int n;
    cin >> n;
    int v[n];
    int val = 100000000;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans(n, 0);
    int idx1, idx2;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != 0)
            continue;
        else
        {
            idx1 = i;
            idx2 = v[i];
            idx2 -= 1;
            if (ans[idx2] == 0)
            {
                ans[idx2] = val;
                ans[idx1] = ans[idx2];
                val -= 1;
            }
            else
            {
                ans[idx1] = ans[idx2];
            }
        }
    }
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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
