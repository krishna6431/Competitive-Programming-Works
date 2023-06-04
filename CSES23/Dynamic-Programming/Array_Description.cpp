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

ll f(ll idx, ll prev, vll &v, ll m, vvll &dp)
{
    if (idx == (ll)v.size())
    {
        return 1;
    }

    if (dp[idx][prev] != -1)
    {
        return dp[idx][prev];
    }

    ll skipping = 0, notSkipping = 0;
    if (v[idx] == 0)
    {
        if (prev >= 1 and prev <= m)
        {
            v[idx] = prev;
            notSkipping %= MOD;
            notSkipping += f(idx + 1, v[idx], v, m, dp);
            v[idx] = 0;
            notSkipping %= MOD;
        }
        if (prev + 1 >= 1 and prev + 1 <= m)
        {
            v[idx] = prev + 1;
            notSkipping %= MOD;
            notSkipping += f(idx + 1, v[idx], v, m, dp);
            v[idx] = 0;
            notSkipping %= MOD;
        }
        if (prev - 1 >= 1 and prev - 1 <= m)
        {
            v[idx] = prev - 1;
            notSkipping %= MOD;
            notSkipping += f(idx + 1, v[idx], v, m, dp);
            v[idx] = 0;
            notSkipping %= MOD;
        }
    }
    else
    {
        if (abs(v[idx] - prev) > 1)
        {
            return 0;
        }
        else
        {
            skipping = f(idx + 1, v[idx], v, m, dp);
            skipping %= MOD;
        }
    }
    dp[idx][prev] = skipping % MOD + notSkipping % MOD;
    dp[idx][prev] %= MOD;
    return dp[idx][prev];
}

void HarHarMahadev()
{
    ll n, m;
    cin >> n >> m;
    vll v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    vvll dp(n + 1, vll(m + 1, -1));
    ll prev = v[0];
    ll ans = 0;
    if (v[0] == 0)
    {
        for (int i = 1; i <= m; i++)
        {
            v[0] = i;
            ans %= MOD;
            ans += f(1, i, v, m, dp);
            ans %= MOD;
        }
    }
    else
    {
        ans = f(1, prev, v, m, dp);
    }
    cout << ans << endl;
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}