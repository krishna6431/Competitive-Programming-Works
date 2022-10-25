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

bool isMaxPresent(ll i, vector<ll> &v)
{

    for (auto x : v)
    {
        if (x == i)
            return false;
    }
    return true;
}
// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n, k;
    cin >> n >> k;
    vll v(n, 0);
    unordered_map<ll, ll> mp;
    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
    }

    queue<ll> q;
    for (ll i = 1; i <= 2 * n; i++)
    {
        if (mp[i] != 1)
        {
            q.push(i);
        }
    }
    ll ans1 = 0;
    ll ans2 = 0;
    ll z = 0;
    sort(all(v));
    for (ll i = 0, j = 0; i < k; i++, j++)
    {
        ll f = q.front();
        ll param1 = v[n - 1] - f;
        ll param2 = 2 * n - f;
        ans1 += max(z, param1);
        if (j < k - 1)
        {
            ans2 += max(z, param2);
        }
        q.pop();
    }
    cout << max(ans1, ans2) << endl;
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