// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROSh
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
int distinct(vector<int> v)
{
    map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    int count = m.size();
    m.clear();
    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max;
    int t = INT_MIN;
    int cmp = distinct(v);
    // cout << cmp;
    for (int i = 0; i <= n - k; i++)
    {
        max = v[i];
        vector<int> temp;
        temp.pb(v[i]);
        for (int j = 1; j < k; j++)
        {
            if ((max + v[i + j]) > max)
            {

                max += v[i + j];
                temp.pb(v[i + j]);
            }
        }
        // cout << max << " ";
        if (cmp == distinct(temp))
        {
            if (max > t)
            {
                t = max;
            }
            temp.clear();
        }
    }
    // for(auto x : maxi) cout << x << " ";
    // cout << *max_element(all(maxi))<<endl;
    cout << t << endl;
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
    while (t--)
    {
        solve();
    }
    return 0;
}
