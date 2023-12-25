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

// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    vector<string> one;
    vector<string> z;
    vector<string> o;
    vector<string> t;
    vector<string> th;
    vector<string> f;
    vector<string> fi;
    vector<string> s;
    vector<string> se;
    vector<string> e;
    vector<string> ni;

    string ans = "";
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            ans.pb(v[i - 1] + '0');
            // ans.pb(v[i] + '0');
            // i += 2;
        }
        else
        {
            ans.pb(v[i - 1] + '0');
            // cout << ans << " ";
            one.pb(ans);
            ans = "";
        }
    }
    if (v[n - 2] == v[n - 1])
    {
        ans.pb(v[n - 1] + '0');
        one.pb(ans);
    }
    else
    {
        ans = "";
        ans.pb(v[n - 1] + '0');
        one.pb(ans);
    }
    for (int i = 0; i < one.size(); i++)
    {
        if (v[i][0] == '0')
            z.pb(v[i]);
        if (v[i][0] == '1')
            o.pb(v[i]);
        if (v[i][0] == '2')
            t.pb(v[i]);
        if (v[i][0] == '3')
            th.pb(v[i]);
        if (v[i][0] == '4')
            f.pb(v[i]);
        if (v[i][0] == '5')
            fi.pb(v[i]);
        if (v[i][0] == '6')
            s.pb(v[i]);
        if (v[i][0] == '7')
            se.pb(v[i]);
        if (v[i][0] == '8')
            e.pb(v[i]);
        if (v[i][0] == '9')
            ni.pb(v[i]);
    }

    ans =
}

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}
