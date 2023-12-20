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
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
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

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
void HarHarMahadev()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v1(n + 2), v2(n + 2);
        v1[0] = -1;
        v2[0] = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> v1[i];
        }
        for (int j = 1; j <= n; j++)
        {
            cin >> v2[j];
        }
        v1[n + 1] = -1;
        v2[n + 1] = -1;
        map<ll, ll> mp, mp1;
        ll count = 1;
        for (int i = 1; i <= n + 1; i++)
        {
            if (v1[i] == v1[i - 1])
            {
                count++;
            }
            else
            {
                mp[v1[i - 1]] = max(mp[v1[i - 1]], count);
                count = 1;
            }
        }
        count = 1;
        for (int i = 1; i <= n + 1; i++)
        {
            if (v2[i] == v2[i - 1])
            {
                count++;
            }
            else
            {
                mp1[v2[i - 1]] = max(mp1[v2[i - 1]], count);
                count = 1;
            }
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " " << y << endl;
        // }
        // cout << "****" << endl;
        // for (auto [x, y] : mp1)
        // {
        //     cout << x << " " << y << endl;
        // }
        ll ans = 0;
        for (auto [x, y] : mp)
        {
            if (x != -1)
            {
                ans = max(ans, y + mp1[x]);
            }
        }
        for (auto [x, y] : mp)
        {
            ans = max(ans, y);
        }
        for (auto [x, y] : mp1)
        {
            ans = max(ans, y);
        }
        cout << ans << endl;
        // cout << "*************" << endl;
    }
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}