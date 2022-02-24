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
    ll n, d1;
    cin >> n >> d1;
    string str = to_string(n);
    char d = d1 + 48;
    int found;
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == d)
        {
            found = i;
            flag = true;
            if (d == '9')
            {
                found = i - 1;
                while (str[found] == '8')
                {
                    found--; 
                }
            }
            else if (d == '0')
            {
                string quick = "";
                for (int j = 0; j < str.size(); j++)
                {
                    if (str[j] != '0')
                    {
                        quick.pb(str[j]);
                    }
                    else
                    {
                        quick.pb('1');
                        int sz1 = str.size() - quick.size();
                        while (sz1--)
                        {
                            quick.pb('1');
                        }
                        // cout << quick << " " << str << endl;
                        cout << stoll(quick) - stoll(str) << endl;
                        return;
                    }
                }
            }
            break;
        }
    }
    if (!flag)
    {
        cout << 0 << endl;
        return;
    }

    if (found == -1)
    {
        string quick1 = "1";
        for (int i = 0; i < str.size(); i++)
        {
            quick1.pb('0');
        }
        // cout << quick1 << " " << str << endl;
        cout << stoll(quick1) - stoll(str) << endl;
        return;
    }
    string ans = "";
    for (int i = 0; i < found; i++)
    {

        ans.pb(str[i]);
    }
    // cout << found;
    int a = str[found] - '0';
    a = a + 1;
    string replaced = to_string(a);
    ans.pb(replaced[0]);
    int sz = str.size() - ans.size();
    while (sz--)
    {
        ans.pb('0');
    }
    // cout << str << " " << ans << endl;
    cout << stoll(ans) - stoll(str) << endl;
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
