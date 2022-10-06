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
ll closestNumber(ll n, ll m)
{
    ll q = n / m;
    ll n1 = m * q;
    ll n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    if (abs(n - n1) < abs(n - n2))
        return n1;
    return n2;
}
// CODE WRITTEN BY mr_krishna/krishna_6431
bool cmp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first <= p2.first;
    }
    return p1.second < p2.second;
}
void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> v1(n), v2(n);
    for (auto &x : v1)
        cin >> x;
    for (auto &x : v2)
        cin >> x;
    vector<pair<ll, ll>> vp;
    for (ll i = 0; i < n; i++)
    {
        vp.push_back({v1[i], v1[i] - v2[i]});
    }

    sort(all(vp), cmp);

    // for (auto x : vp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    ll i = 0;
    ll ans = 0;
    while ( i < n)
    {
       if(p-vp[i].first >=0){
           ans += ((p-vp[i].first)/vp[i].second)+1);
           p = vp[i].second + (p-vp[i].first)/vp[i].second)
       }
       i++
    }
    cout << ans << endl;
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
        // cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}
