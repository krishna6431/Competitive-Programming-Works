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

void solve()
{
    vector<int> arr(11, 0);
    for (int i = 0; i < 4; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 1; i <= 11; i++)
    {
        if (arr[i] == 4)
        {
            cout << 0 << endl;
            return;
        }
        else if (arr[i] == 3)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            continue;
        }
    }
    cout << 2 << endl;
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
    // int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        // tc++;
        solve();
    }
    return 0;
}
