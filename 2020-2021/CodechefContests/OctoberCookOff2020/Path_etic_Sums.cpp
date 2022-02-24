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
// CODE WRITTEN BY KRISHNA_6431
const int N = 105;
//adjacency list
vector<int> graph[N];
// array to output
int arr[N];

//dfs traversal
void dfs(int u , int prev_val){
    arr[u]=(arr[prev_val]&1)?2:1;
    for(auto v : graph[u]){
        if(v!=prev_val){
            dfs(v,u);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i =0 ; i < n-1 ; i++){
        int u,v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    arr[0]=1; 
    dfs(1,0);
    for(int i = 1; i <=n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i =0 ; i <= n ; i++){
        graph[i].clear();
    }
}

int main()
{
    fast;

// #ifndef ONLINE_JUDGE
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
