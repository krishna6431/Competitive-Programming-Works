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
int helpMe(int i, vector<vector<int>> &v, int prev, vector<vector<int>> &dp)
{
    if (i == v.size())
    {
        return dp[i][prev] = 0;
    }
    int ans = 0;

    if (dp[i][prev] != -1)
    {
        return dp[i][prev];
    }

    for (int j = 0; j < 3; j++)
    {
        if (j != prev)
        {
            ans = max(ans, v[i][j] + helpMe(i + 1, v, j, dp));
        }
    }
    return dp[i][prev] = ans;
}

void HarHarMahadev()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }
    // vector<vector<int>> dp(n + 1, vector<int>(4, 0));
    // int ans = helpMe(0, v, 3, dp);
    // cout << ans << endl;

    vector<int> next(4, 0);
    vector<int> curr(4, 0);

    for (int i = 0; i < 3; i++)
    {
        next[i] = 0;
    }

    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int prev = 0; prev < 3; prev++)
        {
            int ans = 0;
            for (int j = 0; j < 3; j++)
            {
                if (j != prev)
                {
                    ans = max(ans, v[idx][j] + next[j]);
                }
            }
            curr[prev] = ans;
        }
        next = curr;
    }

    // for (auto x : dp)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }

    cout << max(curr[0], max(curr[1], curr[2])) << endl;
}

int main()
{
    RadheKrishna;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int testcase = 1;
    // cin >> testcase;
    // int testcaseCount = 1;
    // while (testcase--)
    // {
    //     // cout << "Case #" << testcaseCount << ": ";
    //     testcaseCount++;
    HarHarMahadev();
    // }
    return 0;
}