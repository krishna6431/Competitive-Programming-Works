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
bool IsPowerOfTwo(ulong x)
{
    return (x & (x - 1)) == 0;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     int n1 = n - 1;
//     int count1 = 0;
//     int count2 = 0;
//     while (n)
//     {
//         n = n >> 1;
//         count1++;
//     }
//     while (n1)
//     {
//         n1 = n1 >> 1;
//         count2++;
//     }
//     if (count1 == count2)
//         cout << 1 << endl;
//     else
//         cout << 0 << endl;
// }
void solve()
{
    ll n;
    cin >> n;
    // ll ans = 0;
    ll base = 2;
    vector<ll> ans;
    while (base <= n)
    {
        ans.pb(base);
        base = base * 2;
    }
    // for(auto x : ans) cout << x << " ";
    ll res =0;
    for(int i = 1 ; i < ans.size() ; i++){
        res += ans[i] - ans[i-1] -1;
    }
    res += (n-ans[ans.size()-1]);
    // cout << endl;
    cout  <<res << endl;
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
