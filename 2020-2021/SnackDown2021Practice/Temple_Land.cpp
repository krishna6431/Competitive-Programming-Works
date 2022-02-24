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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int flag = 1;
    int flag2 = 1;
    if (n % 2 == 0)
    {
        cout << "no" << endl;
        return;
    }
    else if (n % 2 == 1)
    {
        if (v[0] == 1)
        {
            int center = (n / 2);

            for (int i = 1; i < center; i++)
            {
                if ((v[i] - v[i - 1]) != 1)
                {
                    // cout << "executed" << endl;
                    flag = 0;
                    break;
                }
            }
            for (int i = center + 1; i < (n - 1); i++)
            {
                if ((v[i] - v[i + 1]) != 1)
                {
                    // cout << "executed" << endl;
                    flag2 = 0;
                    break;
                }
            }
            if (flag && flag2 && (v[center] - v[center + 1] == 1) && (v[center] - v[center - 1] == 1))
            {
                cout << "yes" << endl;
                return;
            }
            else
            {
                cout << "no" << endl;
                return;
            }
        }
        else
        {
            cout << "no" << endl;
            return;
        }
    }
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
