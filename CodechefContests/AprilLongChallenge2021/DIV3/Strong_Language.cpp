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
// CODE WRITTEN BY KRISHNA
// ll solve(ll v[][m + 1], ll n, ll m, ll k, ll order)
// {

//     }
//     return count;
// }
int main()
{
    fast;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int temp = 0;
        int ans = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == s.size() - 1)
            {
                if (s[i] == '*')
                {
                    temp++;
                    ans = temp;
                    temp = 0;
                    if (ans == k)
                    {
                        flag = 1;
                    }
                    break;
                }
                else
                {
                    ans = temp;
                    temp = 0;
                    if (ans == k)
                    {
                        flag = 1;
                    }
                    break;
                }
            }
            if (s[i] != '*')
            {
                ans = temp;
                temp = 0;
                if (ans == k)
                {
                    flag = 1;
                }
            }
            else
            {
                temp++;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}