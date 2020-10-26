//All Important Header Files
#include <bits/stdc++.h>
#include <time.h>
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

//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431

int main()
{
    //     clock_t t_start = clock();
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cout.tie(NULL);

    ll n;
    cin >> n;
    ll res = 2;
    ll r = 1;
    while (n != 1)
    {
        if (n & 1)
        {
            r = (r * res) % MOD;
            n -= 1;
        }
        else
        {
            res = (res * res) % MOD;
            n /= 2;
        }
    }
    cout << (r * res) % MOD << "\n";

    // printf("Execution Time: %.2f sec", (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}