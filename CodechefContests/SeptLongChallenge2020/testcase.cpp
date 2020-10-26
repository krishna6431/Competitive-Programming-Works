// All Important Header Files
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
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

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    // freopen("../input.txt", "r", stdin);
    freopen("../output1.txt", "w", stdout);
#endif
    int t = 20000;
    cout << t << endl;
    while (t--)
    {
        cout << (rand() * rand()) % 1000000000 << " " << (rand() * rand()) % 1000000000 << endl;
    }
    return 0;
}
