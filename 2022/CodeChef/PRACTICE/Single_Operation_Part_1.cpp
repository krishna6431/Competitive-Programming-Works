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
    // ll n = 27;
    // ll i = 1;
    // while (i < 32)
    // {
    //     cout << floor(n / pow(2, i++)) << endl;
    // }
    // // 1111
    //    1000
    //    0100
    //    0010
    //    0001

    // 1 0 1 0
    // 0 1 0 1
    // 0 0 1 0
    // 0 0 0 1

    // 1 1 0 1
    // 0 1 1 0
    // 0 0 1 1
    // 0 0 0 1

    // 1 1 0 1 0     0 0 1 0 1
    //  1 1 0 1        1 1 0 1
    //  0 1 1 0        0 1 1 0
    //  0 0 1 1
    //  0 0 0 1
    // int j = 27;
    // int k = 3;
    // int x = j ^ k;
    // // cout << x << endl;

    // 1 1 0 1 0 0 1 1 0 1 0 0 1 0 0
    ll n;
    cin >> n;
    string str;
    cin >> str;
    string temp = "";
    ll ans = 1;
    for (char ch : str)
    {
        if (ch == '0')
        {
            temp.pb('1');
        }
        else
        {
            temp.pb('0');
        }
    }
    string div2 = "0";
    for (int i = 0; i < n - 1; i++)
    {
        div2.pb(str[i]);
    }
    // bug(str, temp, div2);
    ll idxc = -1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            idxc = i;
            break;
        }
    }
    ll idxdiv2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (div2[i] == '1')
        {
            idxdiv2 = i;
            break;
        }
    }
    // bug(idxc, idxdiv2);
    if (idxc == -1)
    {
        ans = n;
    }
    else
    {
        ans = ans + (idxc - idxdiv2);
    }
    // bug(ans);
    cout << ans << endl;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
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