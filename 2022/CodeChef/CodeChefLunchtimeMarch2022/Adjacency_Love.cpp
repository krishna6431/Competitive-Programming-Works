/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
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
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> check(n);
    for (ll &x : v)
        cin >> x;
    ll odd = 0, even = 0;
    stack<ll> so, se;
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
            check[i] = 1, odd++, so.push(v[i]);
        else
        {
            check[i] = 0, even++, se.push(v[i]);
        }
    }
    if (((n & 1) && odd == n) || odd == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (odd >= 2)
    {
        if (odd & 1)
        {
            int i = 0;
            v[i++] = so.top();
            so.pop();
            while (!se.empty())
            {
                v[i++] = se.top();
                se.pop();
            }
            while (!so.empty())
            {
                v[i++] = so.top();
                so.pop();
            }
        }
        else
        {
            int i = 0;
            while (!se.empty())
            {
                v[i++] = se.top();
                se.pop();
            }
             while (!so.empty())
            {
                v[i++] = so.top();
                so.pop();
            }
        }
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
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
    int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}
