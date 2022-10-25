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

ll modd = 998244353;
// CODE WRITTEN BY mr_krishna/krishna_6431
// void recurse(string str, ll i, ll j, ll n, ll &ans)
// {
//     if (j <= 0)
//     {
//         ans = (ans % 998244353 + 1) % 998244353;
//         return;
//     }
//     string temp = "";
//     // bug(str[j - 1], str[j]);
//     temp.pb(str[j - 1]);
//     temp.pb(str[j]);
//     // bug(temp);
//     // cout << temp << endl;
//     if (temp == "ab")
//     {
//         // bug(temp, j);
//         recurse(str, i, j - 2, n, ans);
//         recurse(str, i, j - 1, n, ans);
//     }
//     else if (temp == "ba")
//     {
//         // bug(temp, j);
//         recurse(str, i, j - 2, n, ans);
//         recurse(str, i, j - 1, n, ans);
//     }
//     else
//     {
//         // bug(temp, j);
//         recurse(str, i, j - 1, n, ans);
//     }
// }
// void solve()
// {
//     string str;
//     cin >> str;
//     ll n = str.size();
//     ll i = 0;
//     ll j = n - 1;
//     ll ans = 0;
//     recurse(str, i, j, n, ans);
//     cout << ans << endl;
// }

void solve()
{
    string str;
    cin >> str;
    ll n = str.size();
    ll i = 0;
    ll j = n - 1;
    vector<ll> dp(n + 1, 0);
    dp[n] = 1;
    dp[n - 1] = 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        // bug(str[i], str[i + 1]);
        str[i] == str[i + 1] ? dp[i] = dp[i + 1] % modd : dp[i] = (dp[i + 1] % modd + dp[i + 2] % modd) % modd;
        // for (auto x : dp)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
    }
    ll ans = dp[0];
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