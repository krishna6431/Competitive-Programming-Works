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
    ll n, x;
    cin >> n >> x;
    map<ll, ll> freq1, freq2;
    vector<ll> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        freq1[v[i]]++;
        freq2[v[i] ^ x]++;
    }
    ll ans = 0;
    ll opr = 0;
    for (auto itr : freq2)
    {
        if (freq1.find(itr.first) != freq1.end())
        {
            if (itr.second + freq1[itr.first] > ans)
            {
                ans = itr.second + freq1[itr.first];
                opr = freq1[itr.first];
            }
            else if (itr.second + freq1[itr.first] == ans)
            {
                opr = min(opr, freq1[itr.first]);
            }
        }
    }

    for (auto itr : freq1)
    {
        if (itr.second > ans)
        {
            ans = itr.second;
            opr = 0;
        }
        else if (itr.second == ans)
        {
            opr = 0;
        }
    }

    if (x == 0)
    {
        cout << ans << " 0" << endl;
    }
    else
    {
        cout << ans << " " << opr << endl;
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
