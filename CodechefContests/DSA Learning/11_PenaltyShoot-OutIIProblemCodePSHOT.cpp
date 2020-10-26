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
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fast;
    ll tc;

    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cntA = 0, cntB = 0;
        ll count = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
            {

                if (s[i] == '1')
                {
                    cntA++;
                }
                if (cntA > (n - (i / 2) + cntA) or cntB > (n - (i + 2) / 2) + cntB)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
            if (i % 2 != 0)
            {
                if (s[i] == '1')
                {
                    cntB++;
                }
                if (((cntA > (n - (i + 2) / 2)) + cntB) or (cntB > (n - (i + 1) / 2) + cntA))
                {
                    cout << i + 1 << endl;
                    break;
                }
            }

            count++;
        }
        if (count == 2 * n)
        {
            cout << count << endl;
        }
    }
    return 0;
}