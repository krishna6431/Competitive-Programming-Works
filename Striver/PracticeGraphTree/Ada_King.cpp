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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {0, -1, 1, -1, 1, -1, 1, 0};

void solve()
{
    // memset(vis, 0, sizeof(vis));
    ll i, j, maxMoves;
    cin >> i >> j >> maxMoves;
    queue<pair<ll, ll>> q;
    int vis[9][9] = {0};
    q.push({i, j});
    vis[i][j] = 1;
    ll ans = 1;
    while (maxMoves--)
    {
        ll n = q.size();
        while (n--)
        {
            auto current = q.front();
            q.pop();
            for (int k = 0; k < 8; k++)
            {
                ll newx = dx[k] + current.first;
                ll newy = dy[k] + current.second;
                if (newx >= 1 && newy >= 1 && newx <= 8 && newy <= 8)
                {
                    if (vis[newx][newy] == 0)
                    {
                        q.push({newx, newy});
                        vis[newx][newy] = 1;
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
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