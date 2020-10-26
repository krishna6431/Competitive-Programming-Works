//All Important Header Files
#include <bits/stdc++.h>
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

ll digit_sum(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + digit_sum(n / 10);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    int t;

    cin >> t;

    while (t--)

    {
        int n;
        cin >> n;
        int m_p = 0;
        int c_p = 0;
        while (n--)
        {
            ll a, b;
            cin >> a >> b;
            ll power_a = digit_sum(a);
            ll power_b = digit_sum(b);
            if (power_a > power_b)
            {
                c_p++;
            }
            else if (power_a < power_b)
            {
                m_p++;
            }
            else if (power_a == power_b)
            {
                c_p++;
                m_p++;
            }
        }
        if (c_p > m_p)
        {
            cout << 0 << " " << c_p << endl;
        }
        else if (m_p > c_p)
        {
            cout << 1 << " " << m_p << endl;
        }
        else if (c_p == m_p)
        {
            cout << 2 << " " << c_p << endl;
        }
    }

    return 0;
}