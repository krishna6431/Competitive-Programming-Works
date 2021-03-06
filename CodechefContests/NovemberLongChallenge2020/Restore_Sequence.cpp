// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i <= end; i++)
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
void print(vector<ll>v)
{
    for(ll i =1 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
bool corner_case(string check,vector<ll>v,int id){
    if (v[id] != 0){
          return true;
    }
    return false;
          
}
void solve()
{
    ll n;
    cin >> n;
    ll input[n + 1];
    ll increment = 1000007;
    vector<ll>output(n+1,0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> input[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        if(corner_case("Check",output,i)){
            continue;
        }
        if (output[i] == 0)
        {
            if (output[input[i]] == 0)
            {
                output[input[i]] = increment;
                output[i] = output[input[i]];
                increment -= 1;
            }
            if (output[input[i]] != 0)
            {
                output[i] = output[input[i]];
            }
        }
    }
    print(output);
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
