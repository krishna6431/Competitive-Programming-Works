//All Important Header Files
#include<bits/stdc++.h>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) ; cout.tie(NULL) ;
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

//CODE WRITTEN BY KRISHNA_6431
void solve() {
    ll r, g, b, w;
    cin >> r >> g >> b >> w;
    ll m = min(r, min(g, min(b, w)));
    int odd =0;
    if (r&1) odd++;
    if (g&1) odd++;
    if (b&1) odd++;
    if (w&1) odd++;
    if (odd <=1) {
        cout << "Yes"<< endl;
    }
    else {
        if (m!=0) {
            odd=0;
            r-=1;
            g-=1;
            b-=1;
            w-=1;
            if (r&1) odd++;
            if (g&1) odd++;
            if (b&1) odd++;
            if (w&1) odd++;

            if (odd <=1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }

    }

}

int  main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // solve();
    return 0;
}