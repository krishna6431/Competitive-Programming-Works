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

bool check(vector<ll> &v, int first, int last)
{
    sort(v.begin() + first, v.begin() + last + 1);
    if (is_sorted(v.begin(), v.end()))
        return 1;
    return 0;
}
// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> str;
    ll n_s = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'N')
            n_s++;
    }
    if (n_s == 0 or n_s == n)
    {
        cout << -1 << endl;
        return;
    }

    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }
    ll firstN = -1, lastN = -1, firstS = -1, lastS = -1;
    ll ans = 2;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'N')
        {
            if (firstN == -1)
                firstN = i;
            lastN = i;
        }
        else
        {
            if (firstS == -1)
                firstS = i;
            firstS = i;
        }
    }

    if (check(v, firstN, lastS) == 1 || check(v, firstS, lastN) == 1)
    {
        ans = 1;
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
