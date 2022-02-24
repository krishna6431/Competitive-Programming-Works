//All Important Header Files
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <vector>
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

//CODE WRITTEN BY KRISHNA_6431

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    fast;
    ll t;

    cin >> t;

    while (t--)
    {
        ll digits;
        int d0, d1;
        cin >> digits >> d0 >> d1;
        int s = d0 + d1;
        int cycle = (2 * s) % 10 + (4 * s) % 10 + (8 * s) % 10 + (6 * s) % 10;
        ll total_cycle = (digits - 3) / 4;
        int r_start = (digits - 3) % 4;

        ll sum = 0;

        if (digits == 2)
        {
            sum = s;
            if (sum % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (digits == 3)
        {
            sum = s + s % 10;
            if ((sum % 3) == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int p = 0;
            if (r_start == 1)
            {
                p = (2 * s) % 10;
            }
            else if (r_start == 2)
            {
                p = (2 * s) % 10 + (4 * s) % 10;
            }
            else if (r_start == 3)
            {
                p = (2 * s) % 10 + (4 * s) % 10 + (8 * s) % 10;
            }
            else
            {
            }

            sum = s + (s % 10) + (1ll * cycle * total_cycle) + p;
            if (sum % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}