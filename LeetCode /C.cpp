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
bool cmp(string a, string b)
{
    if (len(a) == len(b))
    {
        return a < b;
    }
    return len(a) < len(b);
}
class Solution
{
public:
    vector<string> shortestSubstrings(vector<string> &arr)
    {
        vector<string> ans(arr.size(), "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
        map<string, set<int>> mp;
        for (int i = 0; i < len(arr); i++)
        {
            // generate substring;
            string str = arr[i];
            ll sz = str.size();
            for (int j = 1; j <= sz; j++)
            {
                for (int k = 0; k <= sz - j; k++)
                {
                    string sub = str.substr(k, j);
                    // cout << i << " " << sub << endl;
                    mp[sub].insert(i);
                }
            }
        }
        // for (auto x : mp)
        // {
        //     cout << x.first << " " << x.second.size() << endl;
        // }
        for (int i = 0; i < len(arr); i++)
        {
            // generate substring;
            string str = arr[i];
            ll sz = str.size();
            bool flag = false;
            vector<string> temp;
            for (int j = 1; j <= sz; j++)
            {
                for (int k = 0; k <= sz - j; k++)
                {
                    string sub = str.substr(k, j);
                    // cout << i << " " << sub << endl;

                    if (mp[sub].size() == 1)
                    {
                        temp.push_back(sub);
                    }
                }
            }
            sort(all(temp), cmp);
            if (temp.size() == 0)
            {
                ans[i] = "";
            }
            else
            {
                ans[i] = temp[0];
            }
        }
        // for (auto x : ans)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        return ans;
    }
};

int main()
{

    Solution leetcode2IDE;
    vector<string> arr1 = {"cab", "ad", "bad", "c"};
    vector<string> output_1 = {"ab", "", "ba", ""};
    if (leetcode2IDE.shortestSubstrings(arr1) == output_1)
    {
        cout << "Sample #1 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #1 : Wrong Answer" << endl;
    }

    vector<string> arr2 = {"gfnt", "xn", "mdz", "yfmr", "fi", "wwncn", "hkdy"};
    vector<string> output_2 = {"g", "x", "z", "r", "i", "c", "h"};
    if (leetcode2IDE.shortestSubstrings(arr2) == output_2)
    {
        cout << "Sample #2 : Accepted" << endl;
    }
    else
    {
        cout << "Sample #2 : Wrong Answer" << endl;
    }

    return 0;
}
