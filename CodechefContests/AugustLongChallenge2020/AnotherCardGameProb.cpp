//All Important Header Files
#include <bits/stdc++.h>
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

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll pc, pr;
        cin >> pc >> pr;
        if (pc <= 9 && pr <= 9)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        ll p, r;
        if (pc % 9 == 0)
        {
            p = pc / 9;
        }
        else
        {
            p = pc / 9 + 1;
        }
        if (pr % 9 == 0)
        {
            r = pr / 9;
        }
        else
        {
            r = pr / 9 + 1;
        }

        if (p == r)
        {
            cout << 1 << " " << p << endl;
        }
        else if (p < r)
        {
            cout << 0 << " " << p << endl;
        }
        else
        {
            cout << 1 << " " << r << endl;
        }
    }

    return 0;
}