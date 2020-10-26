// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
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
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// #define int long long
// CODE WRITTEN BY KRISHNA
vector<ll> ans;
void final_ans(vector<ll> stk)
{   ll i;
    for ( i = 0; i < (int)stk.size() - 1;i++)
    {
        ans.push_back(stk[i]);
    }
    ans.push_back(stk[i]);
}

void dfs(vector<ll> v[],bool visited[], ll x,ll y,vector<ll> stk)
{
    stk.push_back(x);
    if (x == y)
    {
        final_ans(stk);
        return;
    }
    visited[x] = true;
    if (!v[x].empty())
    {
        for (ll j = 0; j < v[x].size(); j++)
        {
            if (visited[v[x][j]] == false)
                dfs(v, visited, v[x][j], y, stk);
        }
    }
    stk.pop_back();
}
void solving(ll x,ll y,vector<ll> v[],ll n,vector<ll> stk)
{
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    dfs(v, visited, x, y, stk);
}

// Driver Code
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q, r;
        cin >> n >> q >> r;
        vector<ll> graph[n+1], stk;
        ll arr[n+1][n+1];
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= n; j++)
            {
                arr[i][j] = 0;
            }
        }
        for (ll i = 0; i < n - 1; i++)
        {   ll u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back(v);
            graph[v].push_back(u);
            arr[u][v] = w;
            arr[v][u] = w;
        }
        while(q--)
        {
            ll s, d;
            cin >> s >> d;
            solving(s, d, graph, n, stk);
            // for(auto x : ans) cout << x << " ";
            ll sol = 0;
            for (ll i = 0; i < (int)ans.size() - 1; i++)
            {
                sol += arr[ans[i]][ans[i + 1]];
            }
            cout << sol << endl;
            ans.clear();
        }
    }
    return 0;
}
