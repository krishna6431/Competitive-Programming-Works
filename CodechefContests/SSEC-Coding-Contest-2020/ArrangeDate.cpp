// All Important Header Files
#include <bits/stdc++.h>
#include <cctype>
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
// CODE WRITTEN BY KRISHNA_6431
class Birthday
{
public:
    ll date;
    ll month;
    ll year;
    Birthday(ll d, ll m, ll y)
    {
        date = d;
        month = m;
        year = y;
    }
};
bool cmp(Birthday b1, Birthday b2)
{
    if (b1.year < b2.year)
    {
        return b1.year < b2.year;
    }
    else if (b1.year == b2.year)
    {
        if (b1.month < b2.month)
        {
            return b1.month < b2.month;
        }
        else if (b1.month == b2.month)
        {
            if (b1.date < b2.date)
            {
                return b1.date < b2.date;
            }
            else if (b1.date == b2.date)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    vector<Birthday> v;
    while (t--)
    {
        string s;
        cin >> s;
        s.append("/");
        ll d1,
            m1, y1;
        string temp = "";
        vector<string> store;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '/')
            {
                temp.pb(s[i]);
            }
            else
            {
                store.pb(temp);
                temp = "";
                continue;
            }
        }

        d1 = stoll(store[0]);
        m1 = stoll(store[1]);
        y1 = stoll(store[2]);
        Birthday b1(d1, m1, y1);
        v.pb(b1);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        Birthday temp = v[i];
        cout << temp.date << "/" << temp.month << "/" << temp.year << endl;
    }
    return 0;
}