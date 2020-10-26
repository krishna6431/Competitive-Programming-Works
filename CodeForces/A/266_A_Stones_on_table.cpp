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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count =0;
    for (int i =0; i < n;) {
        if (s[i]==s[i+1]) {
            count++;
            i++;
        }
        else {
            i++;
        }
    }
    cout << count << endl;
}

int  main() {
    fast;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}