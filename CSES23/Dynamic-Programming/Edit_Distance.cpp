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
ll f(ll i, ll j, string &str1, string &str2, vvll &dp)
{
    if (i == (ll)str1.size() and j == (ll)str2.size())
    {
        return 0;
    }
    if (i == (ll)str1.size() && j != (ll)str2.size())
    {
        return (ll)str2.size() - j;
    }
    if (j == (ll)str2.size() && i != (ll)str1.size())
    {
        return (ll)str1.size() - i;
    }

    if (dp[i][j] != -1)
        return dp[i][j];

    ll oprn1 = 1e9, oprn2 = 1e9, oprn3 = 1e9, oprn4 = 1e9;
    if (str1[i] == str2[j])
    {
        oprn1 = f(i + 1, j + 1, str1, str2, dp);
    }
    else
    {
        oprn2 = 1 + f(i, j + 1, str1, str2, dp);
        oprn3 = 1 + f(i + 1, j, str1, str2, dp);
        oprn4 = 1 + f(i + 1, j + 1, str1, str2, dp);
    }
    return dp[i][j] = min3(oprn1, oprn2, min(oprn3, oprn4));
}

void HarHarMahadev()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    ll n = str1.size();
    ll m = str2.size();
    vvll dp(5005, vll(5005, 1e9));
    // ll ans = f(0, 0, str1, str2, dp);
    // cout << ans << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0)
            {
                dp[i][j] = j;
            }
            else if (j == 0)
            {
                dp[i][j] = i;
            }
            else
            {
                if (str1[i - 1] == str2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
            }
        }
    }
    cout << dp[n][m] << endl;
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}