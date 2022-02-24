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
    std::vector<std::string> g(6);
    g[0] = "Power"; g[1] = "Time"; g[2] = "Space"; g[3] = "Soul"; g[4] = "Reality"; g[5] = "Mind";

    std::vector<std::string> h(6);
    h[0] = "purple"; h[1] = "green"; h[2] = "blue"; h[3] = "orange"; h[4] = "red"; h[5] = "yellow";


    std::vector<bool> a(6, 1);

    long n; std::cin >> n;
    for (long p = 0; p < n; p++) {
        std::string x; std::cin >> x;
        for (long u = 0; u < 6; u++) {
            if (x == h[u]) {
                a[u] = 0;
            }
        }
    }

    std::cout << (6 - n) << std::endl;
    for (long p = 0; p < 6; p++) {
        if (a[p]) {
            std::cout << g[p] << std::endl;
        }
    }
}
int  main() {
    // #ifndef ONLINE_JUDGE
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    // #endif
    fast;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}