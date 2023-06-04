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
set<ll> s;
ll f(ll idx, ll price, vll &coins, vvll &dp)
{
    if (idx == (ll)coins.size())
    {
        if (s.find(price) == s.end() and price != 0)
        {
            s.insert(price);
            return 1;
        }
        return 0;
    }
    if (dp[idx][price] != -1)
        return dp[idx][price];
    ll take = f(idx + 1, price + coins[idx], coins, dp);
    ll notTake = f(idx + 1, price, coins, dp);
    return dp[idx][price] = take + notTake;
}
void HarHarMahadev()
{
    ll n;
    cin >> n;
    vll coins(n);
    for (auto &x : coins)
    {
        cin >> x;
    }
    ll sum = accumulate(all(coins), 0ll);
    // vvll dp(n + 1, vll(sum + 1, -1));
    // ll ans = f(0, 0, coins, dp);
    // cout << s.size() << endl;
    // for (auto x = s.begin(); x != s.end(); x++)
    // {
    //     cout << *x << " ";
    // }
    // cout << endl;
    vll dp(sum + 1, 0);
    dp[0] = 1;
    ll count = 0;
    for (auto ch : coins)
    {
        for (int i = sum; i >= 1; i--)
        {
            if (i - ch >= 0)
                dp[i] = dp[i] or dp[i - ch];
        }
    }

    for (int i = 1; i <= sum; i++)
    {
        if (dp[i] == 1)
            count++;
    }
    cout << count << endl;
    for (int i = 1; i <= sum; i++)
    {
        if (dp[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}