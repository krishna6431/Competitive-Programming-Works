/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using namespace chrono;

// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define mod 1000000007
#define mod1 998244353
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
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define mr_krishna
#ifdef mr_krishna
#define debug(x)        \
    cerr << #x << " ";  \
    printing_debugs(x); \
    cerr << endl;
#else
#define debug(x) ;
#endif

#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
/*******************************************printing_debugsing************************************************************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
void printing_debugs(ll t) { cerr << t; }
void printing_debugs(int t) { cerr << t; }
void printing_debugs(string t) { cerr << t; }
void printing_debugs(char t) { cerr << t; }
void printing_debugs(lld t) { cerr << t; }
void printing_debugs(double t) { cerr << t; }
void printing_debugs(ull t) { cerr << t; }

template <class T, class V>
void printing_debugs(pair<T, V> p);
template <class T>
void printing_debugs(vector<T> v);
template <class T>
void printing_debugs(set<T> v);
template <class T, class V>
void printing_debugs(map<T, V> v);
template <class T>
void printing_debugs(multiset<T> v);
template <class T, class V>
void printing_debugs(pair<T, V> p)
{
    cerr << "{";
    printing_debugs(p.fr);
    cerr << ",";
    printing_debugs(p.sc);
    cerr << "}";
}
template <class T>
void printing_debugs(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void printing_debugs(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
// void printing_debugs(pbds v) {cerr << "[ "; for (auto i : v) {printing_debugs(i); cerr << " ";} cerr << "]";}

/****************************printing_debugsing End*********************************************************/
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
/**********Standard Algorithm************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
ll fast_expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

ll mod_inv_prime(ll a, ll b)
{
    return fast_expo(a, b - 2, b);
}

ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mod_inv_prime(b, m), m) + m) % m;
} // only for prime m

vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
/********************************************************************/

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
const ll maxi = 5005;
ll visited[maxi][maxi];
ll dx[4] = {0, 1, 0, -1};
ll dy[4] = {1, 0, -1, 0};
ll visited2[maxi][maxi];
vpll blocked;
map<ll, ll> sizeMap;
void dfs(ll i, ll j, vector<vector<char>> &grid, ll c, ll &sz)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
    {
        return;
    }
    if (visited[i][j] || grid[i][j] != 'W')
    {
        return;
    }
    visited[i][j] = c;
    sz++;
    for (int k = 0; k < 4; k++)
    {
        ll newx = i + dx[k];
        ll newy = j + dy[k];
        dfs(newx, newy, grid, c, sz);
    }
}
void dfs2(ll i, ll j, vector<vector<char>> &grid, ll &count)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited2[i][j] || grid[i][j] == 'B')
    {
        return;
    }

    if (grid[i][j] == '.')
    {
        count++;
        blocked.pb({i, j});
        visited2[i][j] = 1;
        return;
    }
    visited2[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        ll newx = i + dx[k];
        ll newy = j + dy[k];
        dfs2(newx, newy, grid, count);
    }
}
void HarHarMahadev()
{
    ll n, m;
    cin >> n >> m;
    sizeMap.clear();
    blocked.clear();
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    // cout << endl;
    // for (int i = 0; i < n; i++) 
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    memset(visited, 0, sizeof(visited));

    ll component = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && v[i][j] == 'W')
            {
                ll sz = 0;
                dfs(i, j, v, component, sz);
                // sizeMap[component] = sz;
                component++;
            }
        }
    }

    // memset(visited2, 0, sizeof(visited2));
    // map<ll, ll> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (!visited2[i][j] && visited[i][j] >= 1)
    //         {
    //             for (auto x : blocked)
    //             {
    //                 visited2[x.first][x.second] = 0;
    //             }
    //             ll count = -1;
    //             dfs2(i, j, v, count);
    //             // cout << "count : " << count << endl;
    //             // cout << "Start: " << i << " " << j << endl;
    //             if (count != -1 and count <= 0)
    //             {
    //                 // cout << "YES" << endl;
    //                 mpp[visited[i][j]] = 1;
    //             }
    //         }
    //     }
    // }
    // if (mpp.size() == 0)
    // {
    //     cout << 0 << endl;
    //     return;
    // }

    // cout << "\n";
    // for (auto x : mpp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    ll ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (v[i][j] == '.')
    //         {
    //             set<ll> vis;
    //             ll currAns = 0;
    //             for (int k = 0; k < 4; k++)
    //             {
    //                 ll newx = i + dx[k];
    //                 ll newy = j + dy[k];

    //                 if (newx >= 0 and newx < n and newy >= 0 and newy < m)
    //                 {
    //                     if (mpp[visited[newx][newy]])
    //                     {
    //                         if (vis.find(visited[newx][newy]) == vis.end())
    //                         {
    //                             vis.insert(visited[newx][newy]);
    //                             currAns += mpp[visited[newx][newy]];
    //                         }
    //                     }
    //                 }
    //             }
    //             ans = max(ans, currAns);
    //         }
    //     }
    // }
    cout << ans << endl;
    // cout << "NO" << endl;
}

int main()
{
    RadheKrishna;
    freopen("in1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    auto s1 = high_resolution_clock::now();
    ll testcase = 1;
    if (testcase)
    {
        ll testcase_cnt;
        cin >> testcase_cnt;
        ll t = 1;
        while (testcase_cnt--)
        {
            cout << "Case #" << t << ": ";
            HarHarMahadev();
            t++;
        }
    }
    else
    {
        HarHarMahadev();
    }
    auto st1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(st1 - s1);

#ifdef mr_krishna
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
    return 0;
}