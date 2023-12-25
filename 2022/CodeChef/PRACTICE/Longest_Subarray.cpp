/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
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
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// comparing two boolean arrays
bool isSame(vector<ll> &v1, vector<ll> &v2)
{
    for (int i = 0; i <= 30; i++)
    {
        if ((v1[i] != 0 && v2[i] == 0) || (v1[i] == 0 && v2[i] != 0))
        {
            return false;
        }
    }
    return true;
}

// applying sliding window technique
bool solved(vector<ll> &v, vector<ll> overallOr, ll k)
{
    // for first k window
    vector<ll> windowOr(32, 0);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if ((v[i] >> j) & 1)
            {
                windowOr[j]++;
                overallOr[j]--;
            }
        }
    }
    if (isSame(windowOr, overallOr))
    {
        return true;
    }

    for (int i = k; i < v.size(); i++)
    {
        // removing prev element
        for (int j = 0; j <= 30; j++)
        {
            if ((v[i - k] >> j) & 1)
            {
                windowOr[j]--;
                overallOr[j]++;
            }
        }

        // adding new element

        for (int j = 0; j <= 30; j++)
        {
            if ((v[i] >> j) & 1)
            {
                windowOr[j]++;
                overallOr[j]--;
            }
        }

        if (isSame(windowOr, overallOr))
        {
            return true;
        }
    }
    return false;
}
// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    vector<ll> overallOr(32, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if (((v[i] >> j) & 1))
            {
                overallOr[j]++;
            }
        }
    }

    // finding search space for size of array
    ll l = 1, r = n;
    ll ans = -1;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (solved(v, overallOr, mid))
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}