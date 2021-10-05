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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    vector<ll> freq_left(n, 0);
    vector<ll> freq_right(n, 0);
    ll firstIdx;
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            firstIdx = i + 1;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            firstIdx = i + 1;
        }
        else
        {
            freq_left[i] = firstIdx;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            firstIdx = i + 1;
        }
        else
        {
            freq_right[i] = firstIdx;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << freq_left[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << freq_right[i] << " ";
    }
    cout << endl;

    int ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            ans += min(abs((i + 1) - freq_left[i]), abs((i + 1) - freq_right[i]));
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ll t;
    cin >> t;
    ll tc = 1;
    while (t--)
    {
        cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}
