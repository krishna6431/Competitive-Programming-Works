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
eturn temp.size();
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    ll temp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1])
        {
            continue;
        }
        else if (v[i] == v[i - 1])
        {
            ans++;
            v[i] += 1;
        }
        else
        {
            string s1 = to_string(v[i]);
            string s2 = to_string(v[i - 1]);
            int pos = s1.size();
            for (int i = pos; i < s2.size(); i++)
            {
                int t = s2[i] - '0';
                if (t + 1 <= 9)
                {
                    int te = t + 1;
                    string temp = to_string(te);
                    s1 += temp;
                    ans++;
                }
                if (t + 1 == 10)
                {

                    s1.append("00");
                    ans += 2;
                }
                if (s1.size() == s2.size())
                {
                    if (stoll(s1, nullptr, 10) < stoll(s2, nullptr, 10))
                    {
                        s1.append("0");
                        ans++;
                    }
                }
            }
            v[i] = stoll(s1, nullptr, 10);
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}
