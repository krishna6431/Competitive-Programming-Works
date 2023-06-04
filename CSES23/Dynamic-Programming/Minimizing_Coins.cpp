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

// we can't memoize it becuse constraints are very high so we need to find out some 1d DP based solution to solve this problem
int f(ll idx, ll k, vll &coins, vvll &dp)
{
    if (idx == (ll)coins.size())
    {
        if (k == 0)
            return 0;
        else
            return 1e9;
    }
    if (dp[idx][k] != -1)
        return dp[idx][k];
    int take = 1e9, notTake = 1e9;
    if (k - coins[idx] >= 0)
        take = 1 + f(idx, k - coins[idx], coins, dp);
    notTake = f(idx + 1, k, coins, dp);
    return dp[idx][k] = min(take, notTake);
}

void HarHarMahadev()
{
    ll n, k;
    cin >> n >> k;
    vll coins(n);
    for (auto &x : coins)
    {
        cin >> x;
    }
    vll dp(k + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i] = min(dp[i], i - coins[j] >= 0 ? 1 + dp[i - coins[j]] : (ll)1e9);
        }
    }
    dp[k] == 0 or dp[k] == 1e9 ? cout << -1 : cout << dp[k];
    cout << endl;
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}