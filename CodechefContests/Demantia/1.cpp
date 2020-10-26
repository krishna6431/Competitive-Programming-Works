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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll temp;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.pb(temp);
        }
        sort(v.begin(), v.end(), greater<ll>());
        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        ll p1 = 0, p2 = 0;
        p1 = v[0];
        p2 = v[1] + v[2];
        for (int i = 3; i < n; i++)
        {
            if (i & 1)
            {
                p1 += v[i];
            }
            else
            {
                p2 += v[i];
            }
        }
        if (p1 < p2)
        {
            cout << "second" << endl;
        }
        else if (p1 == p2)
        {
            cout << "draw" << endl;
        }
        else
        {
            cout << "first" << endl;
        }
    }

    return 0;
}