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

void solve(){
    int n;
    cin >> n;
    vector<vector<int>>v;
    while(n--){      
        vector<int>temp(3);
        for(int i =0 ; i < 3 ; i++){
            cin >> temp[i];
        }
        sort(all(temp),greater<int>());
        v.pb(temp);
        temp.clear();
    }
    int cnt =0;
    map<vector<int>,int>m;
    for(int i =0 ; i < v.size();i++){
        m[v[i]]++;
    }
    for(auto &x : m){
        if( x.second==1){
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    fast;

// #ifndef ONLINE_JUDGE
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
