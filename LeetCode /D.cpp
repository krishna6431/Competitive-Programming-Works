/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using namespace chrono;

// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define mod 1000000007
#define mod1 998244353
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define mr_krishna
#ifdef mr_krishna
#define debug(x)        \
    cerr << #x << " ";  \
    printing_debugs(x); \
    cerr << endl;
#else
#define debug(x) ;
#endif

#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
/*******************************************printing_debugsing************************************************************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
void printing_debugs(ll t) { cerr << t; }
void printing_debugs(int t) { cerr << t; }
void printing_debugs(string t) { cerr << t; }
void printing_debugs(char t) { cerr << t; }
void printing_debugs(lld t) { cerr << t; }
void printing_debugs(double t) { cerr << t; }
void printing_debugs(ull t) { cerr << t; }

template <class T, class V>
void printing_debugs(pair<T, V> p);
template <class T>
void printing_debugs(vector<T> v);
template <class T>
void printing_debugs(set<T> v);
template <class T, class V>
void printing_debugs(map<T, V> v);
template <class T>
void printing_debugs(multiset<T> v);
template <class T, class V>
void printing_debugs(pair<T, V> p)
{
    cerr << "{";
    printing_debugs(p.fr);
    cerr << ",";
    printing_debugs(p.sc);
    cerr << "}";
}
template <class T>
void printing_debugs(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void printing_debugs(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void printing_debugs(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        printing_debugs(i);
        cerr << " ";
    }
    cerr << "]";
}
// void printing_debugs(pbds v) {cerr << "[ "; for (auto i : v) {printing_debugs(i); cerr << " ";} cerr << "]";}

/****************************printing_debugsing End*********************************************************/
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
/**********Standard Algorithm************/
// credit : template from priyansh agrawal (only debug statement templates)
// codeforces handle : priyansh31dec
ll fast_expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

ll mod_inv_prime(ll a, ll b)
{
    return fast_expo(a, b - 2, b);
}

ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mod_inv_prime(b, m), m) + m) % m;
} // only for prime m

vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
/********************************************************************/

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)

// Generated By Leetcode2IDE

// map<set<ll>, ll> dp;
// map<tuple<ll, ll, ll>, ll> dp;
ll dp[10001][1001][2];
ll solve(ll idx, vector<int> &nums, int k, int alt)
{
    if (k < 0)
    {
        return -1e9;
    }
    if (idx >= nums.size())
    {
        if (k == 0)
        {
            return 0;
        }
        return -1e9;
    }
    // string key = to_string(idx) + "$krishn" + to_string(k) + "krishna" + to_string(alt);
    if (dp[idx][alt][k] != -1)
    {
        return dp[idx][alt][k];
    }

    ll sum = 0;
    ll ans = -1e9;
    ll notTake = solve(idx + 1, nums, k, alt);
    ll take = -1e9;
    ll finalAns = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (idx + i < nums.size())
        {
            sum += nums[idx + i];
            if (alt == 0)
            {
                take = sum * k + solve(idx + i + 1, nums, k - 1, 1);
            }
            else
            {
                take = -sum * k + solve(idx + i + 1, nums, k - 1, 0);
            }
        }
        ans = max(ans, take);
    }
    return dp[idx][alt][k] = max(ans, notTake);
}

class Solution
{
public:
    long long maximumStrength(vector<int> &nums, int k)
    {
        memset(dp, -1, sizeof(dp));
        ll ans = solve(0, nums, k, 0);
        cout << ans << endl;
        return ans;
    }
};

int main()
{

    Solution leetcode2IDE;
    vector<int> nums1 = {1, 2, 3, -1, 2};
    int k1 = 3;
    int output_1 = 22;
    if (leetcode2IDE.maximumStrength(nums1, k1) == output_1)
    {
        cout << "Sample #1 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #1 : Wrong Answer" << endl;
    }

    vector<int> nums2 = {12, -2, -2, -2, -2};
    int k2 = 5;
    int output_2 = 64;
    if (leetcode2IDE.maximumStrength(nums2, k2) == output_2)
    {
        cout << "Sample #2 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #2 : Wrong Answer" << endl;
    }

    vector<int> nums3 = {-1, -2, -3};
    int k3 = 1;
    int output_3 = -1;
    if (leetcode2IDE.maximumStrength(nums3, k3) == output_3)
    {
        cout << "Sample #3 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #3 : Wrong Answer" << endl;
    }

    return 0;
}
