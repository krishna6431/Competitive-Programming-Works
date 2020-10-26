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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fast;
    ll n;
    cin >> n;
    ll b, h;
    cin >> b >> h;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    stack<ll> stk;
    ll max_v = 1;
    ll topp;
    ll vol_topp;

    ll i = 0;
    while (i < n)
    {
        if (stk.empty() || v[stk.top()] <= v[i])
        {
            stk.push(i);
            i++;
        }
        else
        {
            topp = stk.top();
            stk.pop();
            vol_topp = v[topp] * (stk.empty() ? i : i - stk.top() - 1) * h;
            if (max_v < vol_topp)
            {
                max_v = vol_topp;
            }
        }
    }
    while (stk.empty() == false)
    {
        topp = stk.top();
        stk.pop();
        vol_topp = h * v[topp] * (stk.empty() ? i : i - stk.top() - 1);

        if (max_v < vol_topp)
        {
            max_v = vol_topp;
        }
    }
    ll ac_v = 0;
    for (ll j = 0; j < n; j++)
    {
        ac_v += v[j] * b * h;
    }
    cout << ac_v - max_v << endl;
    return 0;
}
