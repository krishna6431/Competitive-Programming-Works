//All Important Header Files
#include <iostream>
#include <vector>
#include <algorithm>
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

//Code Logic

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fast;
    ll testcase;
    cin >> testcase;
    while (testcase--)
    {
        ll n;
        cin >> n;
        ll wall[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> wall[i];
        }
        int q;
        cin >> q;
        int qarr[q];
        for (int i = 0; i < q; i++)
        {
            ll x, y;
            cin >> x >> y;
            qarr[i] = x + y;
        }

        for (int i =)
    }

    return 0;
}